/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:45:47 by sperron           #+#    #+#             */
/*   Updated: 2024/02/13 13:27:08 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	delete(int n)
{
	if (n < 48 || (n > 57 && n < 65) || (n > 90 && n < 97) || n > 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i])
	{
		if (!a && (str[i] >= 65 && str[i] <= 90))
			str[i] += 32;
		else
			if (a && (str[i] >= 97 && str[i] <= 122))
				str[i] -= 32;
		if (delete(str[i]) == 1)
			a = 1;
		else
		a = 0;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[255] = "**dssdsdffHHH dkdkd dd+ddd ddd-ddd gdgdfgd";

	ft_strcapitalize(str1);
	printf("%s", str1);
	return (0);
}*/
