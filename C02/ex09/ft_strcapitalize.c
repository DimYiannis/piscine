/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:07:18 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/16 18:32:22 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int		ft_str_is_numeric(char	*str);
int		ft_str_is_alpha(char	*str);
char	*ft_strupcase(char	*str);
char	*ft_strlowcase(char	*str);

char	*ft_strcapitalize(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		while (ft_str_is_alpha(p) == 1 || ft_str_is_numeric(p) == 1)
		{
			if (ft_str_is_alpha(p) == 1)
			{
				ft_strupcase(p);
				p++;
			}
			else
				p++;
			while (ft_str_is_alpha(p) == 1)
			{
				ft_strlowcase(p);
				p++;
			}
		}
		p++;
	}
	return (str);
}

// int main()
// {
// 	char x[] = "salut, comment tu vas ? 42MoTs quarante-deux; cinquante+et+un";
// 	printf("%s", ft_strcapitalize(x));
// }

int	ft_str_is_alpha(char *str)
{
	if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
	{
		str++;
	}
	else
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	if (*str > 47 && *str < 58)
	{
		str++;
	}
	else
	{
		return (0);
	}
	return (1);
}

char	*ft_strupcase(char *str)
{
	char	*p;

	p = str;
	if (*p > 96 && *p < 123)
	{
		*p = *p - 32;
		p++;
	}
	else
		p++;
	return (str);
}

char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	if (*p > 64 && *p < 91)
	{
		*p = *p + 32;
		p++;
	}
	else
		p++;
	return (str);
}
