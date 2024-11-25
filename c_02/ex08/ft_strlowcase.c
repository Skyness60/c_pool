/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:06:56 by sperron           #+#    #+#             */
/*   Updated: 2024/02/13 08:02:46 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (int) str[i] + 32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[255] = "dssdsdffJJJJJHHH";

	ft_strlowcase(str1);
	printf("%s", str1);
	return (0);
}*/
