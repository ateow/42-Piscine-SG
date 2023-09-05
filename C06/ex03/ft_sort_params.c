/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 20:04:37 by ateow             #+#    #+#             */
/*   Updated: 2023/08/07 20:04:39 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_print(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;

	k = 0;
	while (k++ < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			i = 0;
			while (argv[j][i] != 0)
			{
				if (argv[j][i] > argv[j + 1][i])
					ft_swap(&argv[j], &argv[j + 1]);
				else if (argv[j][i] == argv[j + 1][i])
					i++;
				else
					break ;
			}
			j++;
		}
	}
	ft_print(argc, argv);
	return (0);
}
