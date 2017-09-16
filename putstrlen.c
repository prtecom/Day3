/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: probert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 14:54:16 by probert           #+#    #+#             */
/*   Updated: 2017/09/16 17:16:54 by probert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>

int		ft_strlen(char *str);
void	ft_putchar(char c);

void    ft_putnbr(int nb)
{
    if (nb > 2147483646 || nb < -2147483648)
        return ;
    if (nb < 0)
    {
        nb = nb * -1;
        ft_putchar('-');
    }
    if (nb < 10)
    {
        ft_putchar(nb + 48);
        return ;
    }
    ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + 48);
    return ;
}
int		main(void)
{
	char chaine[] = "0123456789";
	int nbcar;

	nbcar = 0;

//	printf("Val a = %d, b = %d \n", nbcar, chaine[]);
	nbcar = ft_strlen(chaine);
	ft_putnbr(nbcar);
	ft_putchar('\n');
//	printf("Val a = %d, b = %d \n", a, b);
	return (0);
}
