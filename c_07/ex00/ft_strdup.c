/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:45:28 by sperron           #+#    #+#             */
/*   Updated: 2024/02/29 13:40:26 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	char	*dest;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(src);
	result = ((dest = (char *) malloc(n * sizeof(char) + 1)));
	if (!result)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
}*/