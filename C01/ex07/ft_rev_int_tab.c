/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:19:11 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/07 10:00:05 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*start;
	int	repeat;
	int	temp;	
	int	*end;

	start = tab;
	end = tab + size - 1;
	repeat = size / 2;
	while (repeat != 0)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
		repeat--;
	}
}
