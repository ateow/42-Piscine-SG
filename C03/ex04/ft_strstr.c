/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 00:05:41 by ateow             #+#    #+#             */
/*   Updated: 2023/08/01 00:05:43 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int main ()
{
	char haystack[99] ="123456";
	char needle[99] = "1923";
	
	char* ret = ft_strstr(haystack, needle);
	printf("%s", ret);
	
	//strstr(haystack, needle);
	//ft_strstr(haystack, needle);

	//printf("%s\n", strstr(haystack, needle));
}*/
