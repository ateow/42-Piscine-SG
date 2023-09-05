/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:03:09 by ateow             #+#    #+#             */
/*   Updated: 2023/08/08 19:03:11 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *len)
{
	int	i;

	i = 0;
	while (len[i] != '\0')
		i++;
	return (i);
}

void	empty_str(char *comb_str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		comb_str[i] = '\0';
		i++;
	}
}

int	ft_combinedlen(int size, char **strs, char *sep)
{
	int	i;
	int	finallen;

	i = 0;
	finallen = 0;
	while (i < size)
	{
		if (strs[i] == NULL)
			return (-1);
		if (i == size - 1)
			finallen = finallen + ft_strlen(strs[i]);
		else
			finallen = finallen + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (finallen);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*comb_str;
	int		final_len;
	int		i;

	if (size == 0)
	{
		comb_str = malloc(sizeof(char));
		comb_str[0] = '\0';
		return (comb_str);
	}
	final_len = ft_combinedlen(size, strs, sep);
	comb_str = malloc(sizeof(char) * (final_len + 1));
	empty_str(comb_str, final_len);
	if (comb_str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcpy(strs[i], comb_str);
		if (i < size - 1)
			ft_strcpy(sep, comb_str);
		i++;
	}
	return (comb_str);
}
/*
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "";
	strs[1] = "";
	strs[2] = "";
	separator = "";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
