/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:34:01 by sperron           #+#    #+#             */
/*   Updated: 2024/02/19 12:20:30 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	r = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		r = r * i;
		i++;
	}
	return (r);
}
/*
#include <stdio.h>

int	main()
{
	int	a;
	int	r;

	a = 5;
	r = ft_iterative_factorial(a);
	printf("%d", r);
	return (0);
}*/
