/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:33:33 by ateow             #+#    #+#             */
/*   Updated: 2023/07/30 21:33:35 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		else
			write(1, str + i, 1);
		i++;
	}
}
/*
int main (void)
{
	//ft_putstr_non_printable("Coucou\ntu vas bien");
	//ft_putchar('\n');
	ft_putstr_non_printable("Coucou\ntu vas bien ?"); 
	// \t is in the 17 array of the string. 
	//\t is the number 9 in ascii(do a int printf on the str[17]). 
	//9/16=0 9%16=9 hence output 09
	
	// \v is in the 18 array of the string. 
	//\v is the number 11 in ascii(do a int printf on the str[18]). 
	//11/16=0 11%16=11 hence output 0b
	
	ft_putchar('\n');
}*/
