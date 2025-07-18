/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydimitra <ydimitra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 17:19:00 by ydimitra          #+#    #+#             */
/*   Updated: 2025/06/11 12:59:38 by ydimitra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
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

// int main()
// {

// 	char a[] = "a string of characters";
// 	char b[] = "a string";
// 	int result = ft_strncmp(a, b, 8);
// 	printf("%d", result);
// }
