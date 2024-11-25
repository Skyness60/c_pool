/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:00:40 by sperron           #+#    #+#             */
/*   Updated: 2024/02/21 14:57:31 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace3(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace3(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*#include <stdio.h>

int    main()
{
    char    str[255] = " \t \f \n \r \v--- -+--+1234ab567";

    printf("%d", ft_atoi(str));
    return (0);
}*/