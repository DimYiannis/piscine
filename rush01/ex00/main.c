/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:31:33 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/15 23:37:42 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_grid(char grid[4][4], int row, int col);
int		ft_strlen(char *str);
void		transfer(char dest[4][4], int src[]);
void	copyarg(int dest[], char **src);

int	main(int argc, char **argv)
{
	char	input[4][4];
	int	len;
	int	i;
	int	s[16];

	i = 0;
	len = ft_strlen(argv[1]);
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (len != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else if (argv[1][0] < '1' || argv[1][0] > '4')
	{
		write(1, "Error\n", 6);
		return (1);
	}
	copyarg(s, argv);
	transfer(input, s);
	write_grid(input, 0, 0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void		transfer(char dest[4][4], int src[])
{
	int	i;
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (index < 4)
	{
		i = 0;
		while (i < 4)
		{
			dest[index][i] = src[counter];
			i++;
			counter++;
		}
		index++;
	}
}

void	copyarg(int dest[], char **src)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (counter < 31)
	{
		if (src[1][counter] != ' ')
		{
			dest[i] = src[1][counter];
			counter++;
			i++;
		}
		else
		{
			counter++;
		}
	}
}