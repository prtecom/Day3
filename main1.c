/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/16 11:22:46 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

void	ft_ultimate_ft(int *********n);

int		main(void)
{
	int n;
	int *ptr;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;
	int *********ptr8;
	
	n = 10;
	ptr = &n;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;

	printf("Val n = %d \n", n);
	ft_ultimate_ft(ptr8);
	printf("Val n = %d \n", n);
	return (0);
}
