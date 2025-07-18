/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 22:31:12 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/17 21:21:02 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	if (size == 0)
	{
		len = ft_strlen(src);
		return (len);
	}
	len = 0;
	while ((size - 1 > len) && src)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
// 	char dest[10];
// 	char *s = "Hello World!";

// 	printf("%d\n", ft_strlcpy(dest, s, 10));
// 	printf("%s\n", dest);
// }

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
