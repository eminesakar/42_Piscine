/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:30:24 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:30:25 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);  
}

int	main(int argc, char *argv[])   
{
	int	i;  
	int	j;  

	i = argc - 1;  
	while (i > 0)  
	{
		j = 0; 
		while (argv[i][j] != '\0' && argc)   
		{
			ft_putchar(argv[i][j]);  
			j++;  
		}
		ft_putchar('\n');  
		i--;  
	}
	return (0); 
}