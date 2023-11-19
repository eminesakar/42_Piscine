/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:21:47 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:21:49 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcat(char *dest, char *src)
{
    int    x;
    int    y;

    x = 0;
    while (dest[x])
        x++;
    y = 0;
    while (src[y])
    {
        dest[x + y] = src[y];
        y++;
    }
    dest[x + y] = '\0';
    return (dest);
}

int	main()
{
	char src[] = "sakar";
	char dest[] = "emine ";
	printf("%s", ft_strcat(dest, src));
}
