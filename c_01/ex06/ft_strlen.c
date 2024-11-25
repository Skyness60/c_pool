/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:11:41 by sperron           #+#    #+#             */
/*   Updated: 2024/02/09 12:48:43 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char str[99] = "bonjour";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return 0;
}*/
