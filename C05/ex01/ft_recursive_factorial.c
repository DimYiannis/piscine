/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 21:03:03 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 14:08:19 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb == 0 || nb == 1)
	{
		factorial = 1;
	}
	else if (nb < 0)
	{
		factorial = 0;
	}
	else
	{
		factorial = ft_recursive_factorial(nb - 1) * nb;
		nb--;
	}
	return (factorial);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int n = 6;

// 	printf("%d", ft_iterative_factorial(n));
// }
