/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:53:35 by sperron           #+#    #+#             */
/*   Updated: 2024/02/26 18:04:19 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **a, char **b)
{
	char	*result;

	result = *a;
	*a = *b;
	*b = result;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
