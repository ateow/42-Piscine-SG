/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:41:07 by ateow             #+#    #+#             */
/*   Updated: 2023/07/27 23:41:09 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[size - 1];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*
int main(void)
{
    int c[7] = {1, 2, 3, 8, 5, 1, 9}; 
    ft_rev_int_tab(c, 7);
    printf("%d %d %d %d %d %d\n", c[0], c[1], c[2], c[3], c[4], c[5]);
}*/
