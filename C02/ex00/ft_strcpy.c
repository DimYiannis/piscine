/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 14:36:43 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/17 11:00:37 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str);

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

// int main()
// {
// 	char a[] = "1337 42";
// 	char b[] = "Born to code";

// 	ft_strcpy(a , b);
// 	printf("%s", a);
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
