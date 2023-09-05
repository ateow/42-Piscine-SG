/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:12:29 by ateow             #+#    #+#             */
/*   Updated: 2023/07/30 21:42:30 by vchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//first letter > last letter > middle letters

void	first_row(int rowcounter, int x)
{
	if (rowcounter == 1)
		ft_putchar('/');
	else if (rowcounter == x)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	middle_row(int rowcounter, int x)
{
	if (rowcounter == 1)
		ft_putchar('*');
	else if (rowcounter == x)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	last_row(int rowcounter, int x)
{
	if (rowcounter == 1)
		ft_putchar('\\');
	else if (rowcounter == x)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int	rowcounter;
	int	colcounter;

	if (x > 0 && y > 0)
	{
		rowcounter = 1;
		colcounter = 1;
		while (colcounter <= y)
		{
			while (rowcounter <= x)
			{
				if (colcounter == 1)
					first_row(rowcounter, x);
				if (colcounter == y && y > 1)
					last_row(rowcounter, x);
				if (colcounter > 1 && colcounter < y)
					middle_row(rowcounter, x);
				rowcounter++;
			}
			ft_putchar('\n');
			colcounter++;
			rowcounter = 1;
		}
	}
}
