/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:22:41 by sperron           #+#    #+#             */
/*   Updated: 2024/02/29 16:48:26 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest++ = *src++;
		if (!(*src))
		{
			*dest = '\0';
			return (src);
		}
	}
	*dest = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strtotallen(int size, char **strs, char *sep)
{
	int	j;
	int	destlen;

	destlen = 0;
	j = 0;
	while (j < size)
		destlen += ft_strlen(strs[j++]);
	while (size-- > 1)
		destlen += ft_strlen(sep);
	destlen += 1;
	return (destlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		strlen;
	int		i;

	strlen = ft_strtotallen(size, strs, sep);
	dest = (char *) malloc(strlen);
	i = 0;
	if (size == 0 || !dest)
		return (0);
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
			ft_strcat(dest, sep);
		i++;
	}
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, " "));
}*/