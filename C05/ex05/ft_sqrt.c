/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:16:55 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 14:07:23 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_sqrt(9));
// }
