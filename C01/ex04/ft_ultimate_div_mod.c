/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateow <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:04:13 by ateow             #+#    #+#             */
/*   Updated: 2023/07/27 19:04:15 by ateow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a / *b;
	tmpb = *a % *b;
	*a = tmpa;
	*b = tmpb;
}
/*
int main() {

    int a = 22;
    int b = 5;

    ft_ultimate_div_mod(&a,&b);
    printf("%d %d",a, b);
}*/
