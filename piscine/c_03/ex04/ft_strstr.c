/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsakar <emsakar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 00:22:50 by emsakar           #+#    #+#             */
/*   Updated: 2023/11/20 00:22:52 by emsakar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i])
    {
        j = 0;
        while (str[i + j] == to_find[j] && str[i])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}

int	main()
{
	char str[] = "42Kocaeli havuz öğrencisi";
	char to_find[] = "havuz";
	printf("%s", ft_strstr(str, to_find));
}
