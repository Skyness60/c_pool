/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:19:36 by sperron           #+#    #+#             */
/*   Updated: 2024/02/15 14:30:19 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/* 
#include <stdio.h>

int	main()
{
	char	s1[255] = "dddd";
	char	s2[255] = "qddd";
	int	return_value;
	
	return_value = ft_strcmp(s1, s2);

	printf("%d", return_value);

	return (0);
} */
