/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:59:07 by ateow             #+#    #+#             */
/*   Updated: 2023/08/08 15:59:08 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	arr = (int *)malloc(sizeof(int) * range);
	while (i < range)
	{
		arr[i] = min;
		min = min + 1;
		i++;
	}
	return (arr);
}
/*
int	main()
{
	ft_range(2, 10);
	//printf("orginal:%d:\n", i[0]);
	//printf("mine:%d:\n", j[1]);
}*/
