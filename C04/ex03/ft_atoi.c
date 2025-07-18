/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:49:03 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/24 15:02:05 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		checkspace(char c);

int	ft_atoi(char *str)
{
	int	sign;
	int	len;
	int	num;

	num = 0;
	len = 0;
	sign = 1;
	while (checkspace(str[len]))
	{
		len++;
	}
	while (str[len] == 43 || str[len] == 45)
	{
		if (str[len] == 45)
			sign = -sign;
		len++;
	}
	while (str[len] && str[len] > 47 && str[len] < 58)
	{
		num = num * 10;
		num = num + str[len] - '0';
		len++;
	}
	num = num * sign;
	return (num);
}
int main()
{
	char c[] = "++98";
	printf("%d \n", ft_atoi(c));
	printf("%d", atoi(c));
}

int	checkspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}
