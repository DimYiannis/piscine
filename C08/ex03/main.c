/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:20:42 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/22 17:21:31 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 55;
	point->y = 299;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("%d \n", point.x);
	printf("%d", point.y);
	return (0);
}
