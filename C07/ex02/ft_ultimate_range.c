/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:48:03 by ateow             #+#    #+#             */
/*   Updated: 2023/08/08 17:48:05 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}
