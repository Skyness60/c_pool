/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:54:41 by sperron           #+#    #+#             */
/*   Updated: 2024/02/15 10:17:26 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	char	str1[255] = "\0";

	int n = ft_str_is_printable(str1);
	printf("%d", n);
	return (0);
}*/