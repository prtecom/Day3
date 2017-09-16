/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/16 16:22:14 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(void)
{
//	char string[];

	char string[] = "Une chaine comme une autre";

//	printf("Val string=%d \n", string);
	ft_putstr(string);
	ft_putchar('\n');
	return (0);
}
