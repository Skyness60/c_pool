/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 11:07:26 by sperron           #+#    #+#             */
/*   Updated: 2024/02/24 14:20:46 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (i <= c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (*c);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
