/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:54:41 by sperron           #+#    #+#             */
/*   Updated: 2024/02/13 07:43:04 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 96 && str[i] <= 123))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[255] = "dsfjdHfjdfsfds";

	int n = ft_str_is_lowercase(str1);
	printf("%d", n);
	return (0);
}*/
