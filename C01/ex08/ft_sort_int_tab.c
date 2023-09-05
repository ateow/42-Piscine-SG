/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 00:08:33 by ateow             #+#    #+#             */
/*   Updated: 2023/07/28 00:08:34 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < (size - 1))
	{
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
/*
int	main()
{
	int c[7] = {9, 2, 5, 8, 0, 9}; 
	ft_sort_int_tab(c, 6);
	printf("%d %d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4], c[5]);
}*/
