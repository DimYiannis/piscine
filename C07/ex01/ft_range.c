/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:43:32 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/24 19:42:32 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i = 0;
// 	int min = 0;
// 	int max = 0;
// 	// int *arr = ft_range(-2147483640, -2147483647);
// 	int *arr = ft_range(min, max);
// 	if (arr != NULL)
// 	{
// 		while (i < (max - min))
// 		{
// 			printf("%d ", arr[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }