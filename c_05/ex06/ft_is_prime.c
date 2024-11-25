/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:07:18 by sperron           #+#    #+#             */
/*   Updated: 2024/02/24 13:44:59 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(47));
	printf("%d\n", ft_is_prime(42));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(-20));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}*/