/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/16 14:50:30 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 47;
	b = 42;
	mod = 0;
	div = 0;
	printf("Init : Val a = %d,/  b = %d =%d, reste=%d  \n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("Fct : Val a = %d,/  b = %d =%d, reste=%d  \n", a, b, div, mod);
	return (0);
}
