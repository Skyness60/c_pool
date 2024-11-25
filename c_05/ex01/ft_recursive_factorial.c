/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:22:50 by sperron           #+#    #+#             */
/*   Updated: 2024/02/19 13:22:18 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!(nb < 0))
	{
		if (nb == 0)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	int	a = 5;

	printf("%d", ft_recursive_factorial(a));
	return (0);
}*/