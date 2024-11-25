/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:52:01 by sperron           #+#    #+#             */
/*   Updated: 2024/02/11 17:05:29 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = 0;
	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
	return ;
}
/*
int	main() {
	int	originalArr[5] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = 5;
	i = 0;
	ft_rev_int_tab(originalArr, size);
	while (i < 5)
	{
		printf("%d", originalArr[i]);
		i++;
	}
    return 0;
}
*/
