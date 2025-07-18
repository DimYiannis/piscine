/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mylysenk <mylysenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:10:36 by sbonevel          #+#    #+#             */
/*   Updated: 2025/06/08 18:52:29 by mylysenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rush(int x, int y, char selection);

int	main(int argc, char **argv)
{
	if (argc > 2) {
		write(1,"\nI accept only rush selection number, it should be between 0 and 4", 70);
		return (1);
	}
	char	selection = argv[1][0];
	
	if (selection < 48 || selection > 52) {
		write(1,"\nRush should be between 0 and 4", 32);
		return (1);
	}
	
	rush(5, 4, selection);
	return (0);
}
