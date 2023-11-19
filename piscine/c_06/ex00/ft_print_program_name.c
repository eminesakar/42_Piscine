/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:32:34 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:32:37 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) 
{
	write(1, &c, 1);  
}

int	main(int argc, char *argv[])  
{
	int	i;  

	i = 0;  
	while (argv[0][i] != '\0' && argc)  
	{
		ft_putchar(argv[0][i]);    
		++i; 
	}
	ft_putchar('\n'); 
	return (0);  
}