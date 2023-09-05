/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:09:42 by ateow             #+#    #+#             */
/*   Updated: 2023/08/12 19:09:44 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	is_separtor(char letter, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (letter == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset, int s)
{	
	int	len;

	len = 0;
	while (is_separtor(str[s + len], charset) != 1 && str[s + len] != '\0')
		len++;
	return (len);
}

void	assign_word(char *arr, char *str, char *charset, int s)
{
	int	i;

	i = 0;
	while (is_separtor(str[s + i], charset) != 1 && str[s + i] != '\0')
	{
		arr[i] = str[s + i];
		i++;
	}
	arr[i] = '\0';
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_separtor(str[i], charset) == 1)
			i++;
		else if ((is_separtor(str[i - 1], charset) == 1) || i == 0)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		c;
	char	**arr;

	i = 0;
	c = 0;
	arr = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (str[i] != '\0')
	{
		if (is_separtor(str[i], charset) == 1)
			i++;
		else if ((is_separtor(str[i - 1], charset) == 1) || i == 0)
		{
			arr[c] = malloc(sizeof(char) * (ft_strlen(str, charset, i) + 1));
			assign_word(arr[c], str, charset, i);
			c++;
			i++;
		}
		else
			i++;
	}
	arr[c] = NULL;
	return (arr);
}
/*
int main()
{
    char *s = ".,   hel,,,.lo,w.,o.rd,.up  i  ";
    char *sep = ".,";

    char **result = ft_split(s, sep);
	
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int i = 0;
    while (result[i] != NULL) {
        printf("Word %d: %s\n", i + 1, result[i]);
        free(result[i]); // Free memory for each word
        i++;
    }
    free(result); // Free the array of pointers
    
    return 0;
}*/
