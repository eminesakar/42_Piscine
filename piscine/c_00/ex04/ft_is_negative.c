/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:59:57 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/19 23:59:59 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int s) 
{
	if (s < 0) 
		write(1, "N", 1); 
	else
		write(1, "P", 1);
}
