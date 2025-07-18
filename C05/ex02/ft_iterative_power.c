/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 08:58:40 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 14:08:08 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb * nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 2)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_power(1, 2));
// }