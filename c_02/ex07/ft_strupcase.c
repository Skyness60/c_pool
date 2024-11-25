/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:06:56 by sperron           #+#    #+#             */
/*   Updated: 2024/02/13 08:00:50 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (int) str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[255] = "dssdsdffHHH";

	ft_strupcase(str1);
	printf("%s", str1);
	return (0);
}*/
