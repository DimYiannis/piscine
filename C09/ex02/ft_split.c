/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:19:46 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/26 18:57:04 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	helper1(char *str, char *charset, int i, char **arr);
char	*ft_strdup(char *src);
int		ft_cmp(char c, char *s2);
int		count(char *str, char *charset, int i);

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	i = 0;
	arr = malloc((count(str, charset, 0) + 1) * sizeof(char *));
	if (str == NULL || arr == NULL)
		return (NULL);
	i = 0;
	helper1(str, charset, i, arr);
	arr[count(str, charset, 0)] = NULL;
	return (arr);
}

void	helper1(char *str, char *charset, int i, char **arr)
{
	int		index;
	char	buffer[10000];
	int		j;

	index = 0;
	j = 0;
	while (index <= count(str, charset, 0))
	{
		j = 0;
		while (ft_cmp(str[i], charset) == 0)
			i++;
		while (ft_cmp(str[i], charset) != 0)
			buffer[j++] = str[i++];
		buffer[j] = '\0';
		if (j > 0)
			arr[index++] = ft_strdup(buffer);
	}
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;
	int		count;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < count)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_cmp(char c, char *s2)
{
	int	i;
	
	i = 0;
	while (s2[i])
	{
		i++;
	}
	while (*s2)
	{
		if (c == *s2)
		{
			s2 = s2 + i;
			return (0);
		}	
		else if (c > *s2)
			return (c - *s2);
		else
			return (c - *s2);
	}
	return (0);
}

int	count(char *str, char *charset, int i)
{
	int	j;
	int	n_strings;
	int	count;

	n_strings = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	j = 0;
	while (i < count)
	{
		while (ft_cmp(str[i], charset) == 0)
			i++;
		j = i;
		while (ft_cmp(str[i], charset) != 0)
			i++;
		if (i > j)
			n_strings++;
	}
	return (n_strings);
}
#include <stdio.h>

int	main(void)
{
	char	str[] = "hello-----there";
	char	**arr;
	int		i;

	i = 0;
	arr = ft_split(str, "--");
	while (arr[i])
	{
		printf("%s \n", arr[i]);
		i++;
	}
	return (0);
}
