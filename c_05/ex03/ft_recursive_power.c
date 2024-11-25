/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:26:38 by sperron           #+#    #+#             */
/*   Updated: 2024/02/19 15:21:06 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (!(power < 0))
	{
		if (power == 0)
			return (1);
		else
			return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int	nb = 5;
	int	power = -10;

	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/