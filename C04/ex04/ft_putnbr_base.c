/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:26:17 by ateow             #+#    #+#             */
/*   Updated: 2023/08/03 14:26:18 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_error(char *base)
{
	int	j;
	int	i;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == 127 || base[i] <= 32 || base[i] == 43 || base[i] == 45)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselen;
	long	nbrx;

	nbrx = nbr;
	baselen = 0;
	if (check_error(base) == 1)
	{
		while (base[baselen] != '\0')
			baselen++;
		if (baselen <= 1)
			return ;
		if (nbrx < 0)
		{
			ft_putchar('-');
			nbrx = -nbrx;
		}
		if (nbrx < baselen)
			ft_putchar(base[nbrx]);
		else
		{
			ft_putnbr_base(nbrx / baselen, base);
			ft_putnbr_base(nbrx % baselen, base);
		}
	}
}
/*
int main (void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}*/
