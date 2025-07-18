/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 16:58:10 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/15 10:05:31 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str );
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen == size)
	{
		return (destlen + srclen);
	}
	if (srclen < size - destlen)
	{
		ft_strlcpy(dest + destlen, src, srclen + 1);
	}
	else if (srclen > size - destlen)
	{
		ft_strlcpy(dest + destlen, src, size - destlen - 1);
	}
	return (destlen + srclen);
}

// int	main(void)
// {
// 	char a[] = "1337 42";
// 	char b[] = "Born to code";

// 	ft_strlcat(a, b, 20);
// 	printf("%s", a);
// }

unsigned int	ft_strlen(char *str)
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
