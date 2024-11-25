/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 10:48:54 by sperron           #+#    #+#             */
/*   Updated: 2024/02/13 07:14:10 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	l;

	l = n;
	i = 0;
	while (i < l && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < l)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	src[255] = "sdssfdfsdfsfaf";
	char	dest[255] = "bonjour";
	int	n = 3;

	ft_strncpy(dest, src, n);
	printf("%s", dest);
	return (0);
}*/
