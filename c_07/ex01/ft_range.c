/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:42:01 by sperron           #+#    #+#             */
/*   Updated: 2024/02/29 16:45:26 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;
	int	*b;
	int	i;

	range = max - min;
	b = ((arr = malloc(range * sizeof(int))));
	i = 0;
	if (!b)
	{
		return (0);
	}
	while (i < max)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int	main(void)
{
	int *range;
	range = ft_range(0, 5);
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0],
	range[1], range[2], range[3], range[4]);
	range = ft_range(-1, 1);
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/