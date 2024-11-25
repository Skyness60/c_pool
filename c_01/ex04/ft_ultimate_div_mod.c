/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 09:27:58 by sperron           #+#    #+#             */
/*   Updated: 2024/02/09 11:02:39 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *b;
}
/*int main()
{
	int c;
	int d;

	d = 5;
	c = 20;
	printf("La valeur de base est : c = %d d = %d", c, d);
	ft_ultimate_div_mod(&c, &d);
	printf("La valeur est : c = %d d = %d", c, d);
	return (0);
}*/
