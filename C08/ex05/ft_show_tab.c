/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:39:54 by ateow             #+#    #+#             */
/*   Updated: 2023/08/12 17:39:56 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"
/*
typedef struct	s_stock_str
{
	int	size;
	char	*str;
	char	*copy;
}	t_stock_str;

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_stdup(char *str)
{
	int		i;
	char	*arr;

	i = 0;
	arr = malloc(sizeof(char) * (ft_str_len(str) + 1));
	if (arr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_str_len(av[i]);
		array[i].str = ft_stdup(av[i]);
		array[i].copy = ft_stdup(av[i]);
		i++;
	}
	array[i].str = NULL;
	return (array);
}*/

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_print_nbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		ft_print_nbr(n);
	}
	if (n > 9)
	{
		ft_print_nbr(n / 10);
		ft_print_nbr(n % 10);
	}
	if (n <= 9)
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_print_str(par[i].str);
		write(1, "\n", 1);
		ft_print_nbr(par[i].size);
		write(1, "\n", 1);
		ft_print_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
int main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
}*/
