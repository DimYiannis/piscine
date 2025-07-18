/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 20:33:37 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 14:10:18 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	counter;

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
		counter = 1;
		factorial = nb;
		while (counter < nb)
		{
			factorial = factorial * counter;
			counter++;
		}
	}
	return (factorial);
}

// #include <stdio.h>

// int main()
// {
// 	int n = 4;
// 	printf("%d", ft_iterative_factorial(n));
// }