/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:47:44 by sperron           #+#    #+#             */
/*   Updated: 2024/02/19 14:35:52 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[255] = "donuts_sucre_au_sucre";
	char	s2[255] = "donuts_sucredddddddddddd";
	int	n = 4;

	int return_value = ft_strncmp(s1, s2, n);
	printf("%d", return_value);
	return (0);
}*/
