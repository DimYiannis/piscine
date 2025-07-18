/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 11:01:29 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 14:09:29 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	n2 = 1;
	n3 = n1 + n2;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index > 2)
	{
		n3 = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		index--;
	}
	return (n3);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d ", ft_fibonacci(1));
// 	printf("%d ", ft_fibonacci(2));
// 	printf("%d ", ft_fibonacci(3));
// 	printf("%d ", ft_fibonacci(4));
// 	printf("%d ", ft_fibonacci(5));
// 	printf("%d ", ft_fibonacci(6));
// 	printf("%d ", ft_fibonacci(7));
// 	printf("%d ", ft_fibonacci(8));
// 	printf("%d ", ft_fibonacci(9));
// }