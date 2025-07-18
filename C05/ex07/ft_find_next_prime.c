/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:32:40 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 14:04:48 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
	{
		return (2);
	}
	if (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		else
		{
			nb++;
			ft_find_next_prime(nb);
		}
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			count++;
		i++;
	}
	if (count > 1)
		return (0);
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	int result;
// 	result = ft_find_next_prime(1000);
// 	printf("%d", result);
// }