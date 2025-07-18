/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:12:09 by tzanting          #+#    #+#             */
/*   Updated: 2025/06/15 23:37:57 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_grid(char grid[4][4], int row, int col);
//void	change_grid(char grid[4][4], int row, int col, int arr[4], int rank);
//void	change_array(int arr[4], int v1, int v2, int v3, int v4);
/* please tell me if there is a move efficient way of doing this */
// void	change_array(int arr[4], int v1, int v2, int v3, int v4)
// {
// 	arr[0] = v1;
// 	arr[1] = v2;
// 	arr[2] = v3;
// 	arr[3] = v4;
// }

/* not sure about the name, update or transform would be better? */
// void	change_grid(char grid[4][4], int row, int col)
// {
// 	row = rank - 1;
// 	col = 0;
// 	while (col < 4)
// 	{
// 		grid[row][col] = arr[col];
// 		col++;
// 	}
// }

/* print two dimensional array, stored as [row][column] and print from left to 
right, up to down. */
void	write_grid(char grid[4][4], int row, int col)
{
	char	number;

	row = 0;
	col = 0;
	while (col < 4)
	{
		while (row < 3)
		{
			number = grid[col][row];
			write(1, &number, 1);
			write(1, " ", 1);
			row++;
		}
		number = grid[col][row];
		write(1, &number, 1);
		row = 0;
		write(1, "\n", 1);
		col++;
	}
}
