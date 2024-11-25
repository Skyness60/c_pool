/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:54:41 by sperron           #+#    #+#             */
/*   Updated: 2024/02/15 10:18:25 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[255] = "KKKKK";

	int n = ft_str_is_lowercase(str1);
	printf("%d", n);
	return (0);
}*/
