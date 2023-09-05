/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:05:58 by ateow             #+#    #+#             */
/*   Updated: 2023/08/07 21:06:00 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	results;

	results = 1;
	while (power > 0)
	{
		results = results * nb;
		power--;
	}
	if (power < 0)
		return (0);
	return (results);
}
/*
int main (void)
{
	printf("%i", ft_iterative_power(4, -1));
}*/
