/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:31:41 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:31:42 by emsakar          ###   ########.fr       */
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
	int	j;  

	j = 1;  
	while (j < argc)  
	{
		i = 0;  
		while (argv[j][i] != '\0')  
		{
			ft_putchar(argv[j][i]);  
			i++;  
		}
		ft_putchar('\n');  
		j++;  
	}
	return (0); 
}