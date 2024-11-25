/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:26:36 by sperron           #+#    #+#             */
/*   Updated: 2024/02/29 13:37:13 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*range2;

	range2 = (int *) malloc(sizeof(int) * (max - min));
	i = 0;
	len = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!range)
		return (-1);
	while (i < (max - min))
	{
		range2[i] = len;
		if (len == max)
			range2[i] = len;
		i++;
		len++;
	}
	*range = range2;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
}*/