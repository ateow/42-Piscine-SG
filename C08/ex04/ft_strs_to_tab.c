/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:22:12 by ateow             #+#    #+#             */
/*   Updated: 2023/08/10 18:22:13 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	fstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dupe;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dupe = malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dupe[i] = src[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*temp;
	int			i;

	i = 0;
	temp = malloc(sizeof(t_stock_str) * (ac + 1));
	if (temp == NULL)
		return (NULL);
	while (i < ac)
	{
		temp[i].size = fstrlen(av[i]);
		temp[i].str = av[i];
		temp[i].copy = ft_strdup(av[i]);
		i++;
	}
	temp[i].str = 0;
	return (temp);
}
