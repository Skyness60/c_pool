/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:47:13 by sperron           #+#    #+#             */
/*   Updated: 2024/02/20 08:59:56 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int	nb = 5;
	int	power = -10;

	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/