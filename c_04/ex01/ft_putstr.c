/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:48:25 by sperron           #+#    #+#             */
/*   Updated: 2024/02/15 15:53:33 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
/*
#include <stdio.h>

int	main()
{
	char	str[255] = "Bonjour";
	char	*a = &str[0];
	ft_putstr(str);
	printf("\n%c", *a);
	return (0);
}*/