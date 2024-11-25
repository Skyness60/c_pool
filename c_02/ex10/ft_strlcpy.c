/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 07:41:15 by sperron           #+#    #+#             */
/*   Updated: 2024/02/15 10:14:38 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		size -= 1;
		while (src[i] && i < size)
		{
			if (i < size)
				dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int main()
{
    char    src[10] = "ddddadfghj";
    char    dest[2] = "aa";
    int n = 4;

    int a = ft_strlcpy(dest, src, n);
    printf("%d", a);
    return (0);
}*/
