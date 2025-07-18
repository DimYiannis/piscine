/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:13:52 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/19 10:44:10 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);    
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(-6400008);
}

// void	ft_putnbr(int nb)
// {
// 	char	c;

// 	// c = nb + '0';
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb = -nb;
// 		ft_putnbr(nb);
// 	}
// 	if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);(123)(12) -> (1)
// 	}
// 	c = (nb % 10) + '0';
// 	write(1, &c, 1);
// }