/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:21:47 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/22 17:22:45 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = -5;
	y = -10;
	x = ABS(x);
	y = ABS(y);
	printf("Line number: %d\n", x);
	printf("File name: %d\n", y);
	return (0);
}
