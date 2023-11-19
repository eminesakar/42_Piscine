/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:01:28 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:02:37 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a) 
{
	write(1, &a, 1); 
}

void	ft_print_comb2(void)
{
	int	a; 
	int	b; 

	a = -1; 
	while (a++ < 98) 
	{
		b = a;  
		while (b++ < 99)  
		{
			ft_putchar((a / 10) + 48); 
			ft_putchar((a % 10) + 48); 
			ft_putchar((b / 10) + 48); 
			ft_putchar((b % 10) + 48);  
			{
				ft_putchar(',');  
				ft_putchar(' ');  
			}
		}
	}
}
