/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/16 12:49:20 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 42;
	b = 2;

	printf("Val a = %d, b = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Val a = %d, b = %d \n", a, b);
	return (0);
}
