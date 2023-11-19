/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:57:28 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/19 23:57:52 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	say; 

	say = 97;
	while (say <= 122)
	{
		write(1, &say, 1);
		say++;
	}
}
