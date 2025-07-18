/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mylysenk <mylysenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:11:23 by sbonevel          #+#    #+#             */
/*   Updated: 2025/06/08 18:53:11 by mylysenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y, char rush_selection);
void	ft_putchar(char c);

char	fetch_letter00(int x, int y, int xt, int yt);
char	fetch_letter01(int x, int y, int xt, int yt);
char	fetch_letter02(int x, int y, int xt, int yt);
char	fetch_letter03(int x, int y, int xt, int yt);
char	fetch_letter04(int x, int y, int xt, int yt);

void	rush(int x, int y, char rush_selection)
{
	int		yt;
	int		xt;
	char	letter;
	char	newline;

	yt = 0;
	xt = 0;
	newline = '\n';
	while (yt < y)
	{
		while (xt < x)
		{
			if (rush_selection == '0') {
				letter = fetch_letter00(x, y, xt, yt);
			} else if (rush_selection == '1') {
				letter = fetch_letter01(x, y, xt, yt);
			} else if (rush_selection == '2') {
				letter = fetch_letter02(x, y, xt, yt);
			} else if (rush_selection == '3') {
				letter = fetch_letter03(x, y, xt, yt);
			} else if (rush_selection == '4') {
				letter = fetch_letter04(x, y, xt, yt);
			}
			ft_putchar(letter);
			xt++;
		}
		ft_putchar(newline);
		yt++;
		xt = 0;
	}
}

char	fetch_letter00(int x, int y, int xt, int yt)
{
	char	letter;

	if (((xt == 0 || xt == (x - 1)) && (yt == 0 || yt == (y - 1))))
	{
		letter = 'o';
	}
	else if (yt == 0 || yt == (y - 1))
	{
		letter = '-';
	}
	else if (xt == 0 || xt == (x - 1))
	{
		letter = '|';
	}
	else
	{
		letter = ' ';
	}
	return (letter);
}

char	fetch_letter01(int x, int y, int xt, int yt)
{
	char	letter;

	if ((xt == 0 && yt == 0) || (xt == (x - 1) && yt == (y - 1) && y > 1 && x > 1))
	{
		letter = '/';
	}
	else if ((xt == (x - 1) && yt == 0) || (xt == 0 && yt == (y - 1)))
	{
		letter = '\\';
	}
	else if ((yt == 0 || yt == (y - 1)) || xt == 0 || xt == (x - 1))
	{
		letter = '*';
	}
	else
	{
		letter = ' ';
	}
	return (letter);
}

char	fetch_letter02(int x, int y, int xt, int yt)
{
	char	letter;

	if ((xt == 0 && yt == 0)  || (xt == (x - 1) && yt == 0))
	{
		letter = 'A';
	}
	else if ((xt == 0 && yt == (y - 1)) || (xt == (x - 1) && yt == (y - 1)))
	{
		letter = 'C';
	}
	else if ((yt == 0 || yt == (y - 1)) || xt == 0 || xt == (x - 1))
	{
		letter = 'B';
	}
	else
	{
		letter = ' ';
	}
	return (letter);
}

char    fetch_letter03(int x, int y, int xt, int yt)
{
    char    letter;
    if (xt == 0 && (yt == 0 || yt == (y - 1)))
    {
        letter = 'A';
    }
    else if ((x > 2 && xt == (x - 1)) && (yt == 0 || yt == (y - 1)))
    {
        letter = 'C';
    }
    else if ((yt == 0 || yt == (y - 1)) || xt == 0 || xt == (x - 1))
    {
        letter = 'B';
    }
    else
    {
        letter = ' ';
    }
    return (letter);
}

char	fetch_letter04(int x, int y, int xt, int yt)
{
	char	letter;

	if ((xt == 0 && yt == 0) || (xt == (x - 1) && yt == (y - 1) && y > 1 && x > 1))
	{
		letter = 'A';
	}
	else if ((xt == (x - 1) && yt == 0) || (xt == 0 && yt == (y - 1)))
	{
		letter = 'C';
	}
	else if ((yt == 0 || yt == (y - 1)) || xt == 0 || xt == (x - 1))
	{
		letter = 'B';
	}
	else
	{
		letter = ' ';
	}
	return (letter);
}
