/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:56:27 by sperron           #+#    #+#             */
/*   Updated: 2024/02/19 12:35:30 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*start;
	unsigned int	i;

	i = 0;
	start = dest;
	if (!(src && dest))
		return (0);
	while (*start != '\0')
		start++;
	while (*src != '\0' && i < nb)
	{
		*start++ = *src++;
		i++;
	}
	*start = '\0';
	return (dest);
}
/*
#include <stdio.h>

int    main()
{
    char    src[255] = "jourDDD";
    char    dest[255]  = "bo";
    int a = 4;

    ft_strncat(dest, src, a);
    printf("%s", dest);
    return (0);
}*/
