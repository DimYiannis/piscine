/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 14:15:57 by jkotsola          #+#    #+#             */
/*   Updated: 2025/06/15 23:31:55 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// // Checking number of integers in an array (has to be 16).
// int	input_check1(int *arr)
// {
// 	int	i;
// 	int	size;

// 	i = 0;
// 	size = sizeof(arr) / sizeof(arr[0]);
// 	if ((size == 16 && (arr[i] >= 1 && arr[i] <= 4)))
// 	{
// 		i++;
// 	}
// 	return (1);
// }

// A function for checking if there are enough ones in the array. => 4 1s
int	input_check2(int *arr)
{
	int	i;
	int	n;
	int	size;

	i = 0;
	n = 0;
	size = sizeof(arr) / sizeof(arr[0]);
	while (arr[i] < size + 1)
	{
		if (arr[i] == 1)
		{
			n++;
		}
		i++;
		return (n);
	}
}

// A function for counting frequencies of numbers in an array.
int	count_freq(int *arr, int size, int target)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < size)
	{
		if (arr[i] == target)
			res++;
		i++;
	}
	return (res);
}

// A function to check correct combinations of 2, 3, and 4.. 
int	input_check3(int *arr)
{
	int		size;
	int		n2;
	int		n3;
	int		n4;

	size = sizeof(arr) / sizeof(arr[0]);
	n2 = count_freq(arr, size, 2);
	n3 = count_freq(arr, size, 3);
	n4 = count_freq(arr, size, 4);
	while (n2 >= 6 && n2 <= 8)
	{
		if ((n2 == 6) && ((n4 + n3) == 6))
			return (1);
		else if ((n2 == 7) && ((n4 + n3) == 5))
			return (1);
		else if ((n2 == 8) && ((n4 + n3) == 4))
			return (1);
		return (0);
	}
	
}

// // Main funciton, returns 0 if any of the conditions are not me and 1 if they are met = good
// int	main(void)
// {
// 	int	arr[17] = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
// 	int	size;
	
// 	size = sizeof(arr) / sizeof(arr[0]);
// 	if ((input_check1(arr) == 1) && (input_check2(arr) == 4)
// 		&& (input_check3(arr) == 1))
// 	{
// 		return (1);
// 	}
// 	else
// 	{
// 		return (0);
// 	}
// }
