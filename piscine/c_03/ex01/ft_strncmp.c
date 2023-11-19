/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:20:52 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:21:17 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;

    if (n == 0)
        return (0);
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
        i++;
    return (s1[i] - s2[i]);
}

int	main()
{
	printf("%d\n", ft_strncmp("emia", "eminea", 5));
}
