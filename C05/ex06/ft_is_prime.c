/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:07:50 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/21 13:18:25 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count > 2)
		return (0);
	return (1);
}

// #include <stdio.h>

// int main(void)
// {
// 	int result;
// 	result = ft_is_prime(4);
// 	printf("%d", result);
// }