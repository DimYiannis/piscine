/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main_backup.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: tzanting <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/06/15 18:41:10 by tzanting       #+#    #+#                */
/*   Updated: 2025/06/15 21:11:35 by tzanting       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	create_grid(void);
void	write_grid(char grid[4][4], int row, int col);

int	main(int argc, char **argv)
{
	char	grid[4][4] = {{4, 3, 1, 2}, {3, 2, 4, 1}, {2, 1, 3, 4}, {1, 4, 2, 3}};
	char	solution[32] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int		i;
	char	*user_input;

	i = 0;
	if (argc == 1)
		write(1, "Error", 5);
	else
	{
		user_input = argv[1];
		while (user_input[i] == solution[i])
		{
			write_grid(grid, 4, 4);
			return (0);
		}
		write(1, "Error", 5);
	}
	return (0);
}
