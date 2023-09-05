/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:52:09 by ateow             #+#    #+#             */
/*   Updated: 2023/07/26 17:52:15 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_output(int a, int b)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	write(1, &" ", 1);
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
	if (a != 98)
		write(1, &", ", 2);
}

void	ft_print_comb(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_output(first, second);
			second++;
		}
		first++;
	}
}
