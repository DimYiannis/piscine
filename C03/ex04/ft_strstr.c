/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 11:17:55 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/11 16:56:31 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int	len;

	len = ft_strlen(to_find);
	if (len == 0)
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, len) == 0)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

// int main() 
// {
// 	char a[] = "this is a string of characters";
// 	char b[] = "abc";
// 	printf("%s", ft_strstr(a, b));
// }

int	ft_strlen(char *str)
{
	int		len;
	char	*p;

	p = str;
	len = 0;
	while (*p != '\0')
	{
		len++;
		p++;
	}
	return (len);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char	*p1;
	char	*p2;

	p1 = s1;
	p2 = s2;
	while (n > 0 && (*p1 || *p2))
	{
		if (*p1 == *p2)
		{
			p1++;
			p2++;
			n--;
		}
		else if (*p1 > *p2)
		{
			return (*p1 - *p2);
		}
		else
		{
			return (*p1 - *p2);
		}
	}
	return (0);
}
