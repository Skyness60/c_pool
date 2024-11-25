/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 08:04:13 by sperron           #+#    #+#             */
/*   Updated: 2024/02/20 08:40:56 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*resultat;

	resultat = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (resultat);
}
/*#include <stdio.h>

int	main()
{
	char	src[] = "banana";
	char	dest[]  = "jaime les ";

	ft_strcat(dest, src);
	printf("%s", dest);
	return (0);
}*/
