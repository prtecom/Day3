/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/16 12:13:27 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 20;
	b = 42;

	printf("Val a = %d, b = %d \n", a, b);
	ft_swap(&a, &b);
	printf("Val a = %d, b = %d \n", a, b);
	return (0);
}
