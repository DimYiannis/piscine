/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 18:33:32 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/24 19:43:42 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_add(int size, char **strs, char *sep, char *res);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *str);
int		ft_length(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;

	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		res[0] = '\0';
		return (res);
	}
	len = ft_length(size, strs, sep);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return ("\0");
	ft_add(size, strs, sep, res);
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *str)
{
	char	*p;

	p = dest;
	while (*str)
	{
		*dest = *str;
		dest++;
		str++;
	}
	return (p);
}

int	ft_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		if (i < size - 1)
			length = length + ft_strlen(sep);
		i++;
	}
	return (length);
}

char	*ft_add(int size, char **strs, char *sep, char *arr)
{
	int		i;
	char	*p;

	i = 0;
	p = arr;
	while (i < size)
	{
		ft_strcpy(p, strs[i]);
		p = p + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(p, sep);
			p = p + ft_strlen(sep);
		}
		i++;
	}
	*p = '\0';
	return (arr);
}
// int	check(char *sep)
// {
// 	char	**strings;
// 	char	*str;

// 	strings = malloc(7 * sizeof(char *));
// 	if (strings == NULL)
// 		return (EXIT_FAILURE);
// 	// strings = NULL;
// 	strings[0] = "hi";
// 	strings[1] = "you";
// 	strings[2] = "over";
// 	strings[3] = "there";
// 	strings[4] = "!";
// 	strings[5] = "";
// 	strings[6] = "!";
// 	str = ft_strjoin(7, strings, sep);
// 	// if (str == NULL)
// 	// 	return (EXIT_FAILURE);
// 	printf("result: `%s`\n", str);
// 	return (EXIT_SUCCESS);
// }

// int	main(void)
// {
// 	check(" ");
// 	check("-");
// 	check("");
// 	check("___");
// 	check("++++++++++");
// 	return (EXIT_SUCCESS);
// }
