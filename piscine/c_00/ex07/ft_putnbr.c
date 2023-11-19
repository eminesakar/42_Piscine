/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:02:47 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:04:05 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)  
{
	write(1, &c, 1);  
}
void ft_putnbr(int nb)  
{	
    if(nb == -2147483648)  
    {
        ft_putchar('-');  
        ft_putchar('2');  
        ft_putchar('1');  
        write(1,"47483648", 8);  
    }
	else if (nb < 0)  
	{
		ft_putchar('-');  
		ft_putnbr(-nb);  
	}
	else if (nb > 9)  
	{
		ft_putnbr(nb / 10);  
		ft_putnbr(nb % 10);  
	}
	else if (nb <= 9)  
	{
		ft_putchar(nb + 48);  
	}
}
