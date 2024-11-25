/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:08:12 by sperron           #+#    #+#             */
/*   Updated: 2024/02/26 12:01:22 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	if (nb >= 2)
	{
		while (i * i <= nb)
		{
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
}*/