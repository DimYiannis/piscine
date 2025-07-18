/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 22:24:31 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/24 15:33:09 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int					ft_strlen(char *str);
char				*ft_strdup(char *src);
char	*ft_strcpy(char *dest, char *src);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*s;

	i = 0;
	s = malloc((ac + 1) * sizeof(t_stock_str));
	if (!s)
		return (NULL);
	while (i < ac)
	{
		s[i].str = ft_strdup(av[i]);
		s[i].size = ft_strlen(av[i]);
		s[i].copy = ft_strdup(av[i]);
		i++;
	}
	s[i].str = 0;
	return (s);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

// void	ft_putchar(char c);
// void	ft_putstr(char *str);
// void	ft_putnbr(int nb);

// void ft_show_tab(struct s_stock_str *par)
// {
// 	int i;
// 	i = 0;
// 	while (par[i].str)
// 	{
// 		ft_putstr(par[i].str);
// 		write(1, "\n", 1);
// 		ft_putnbr(par[i].size);
// 		write(1, "\n", 1);
// 		ft_putstr(par[i].copy);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// }

// int main (void)
// {
// 	char *array[3] = {"", "def", "ola"};
// 	ft_show_tab(ft_strs_to_tab(3, array));
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		ft_putnbr(-nb);
// 	}
// 	else if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putchar(nb % 10 + '0');
// 	}
// 	else
// 		ft_putchar(nb + '0');
// }

// void	ft_putstr(char *str)
// {
// 	while (*str != '\0')
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// }
// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }