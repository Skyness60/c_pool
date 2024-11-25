/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperron <sperron@student.42.fr >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:01:49 by sperron           #+#    #+#             */
/*   Updated: 2024/02/29 16:45:57 by sperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_sep(char charstr, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charstr == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	count;

	count = 0;
	n = 0;
	i = 0;
	while (str[i] && is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && !n)
		{
			n = 1;
			count++;
		}
		else if (is_sep(str[i], charset) && n)
			n = 0;
		i++;
	}
	return (count);
}

char	*write_word(char *str, char *charset)
{
	unsigned int	i;
	unsigned int	size;
	char			*word;

	size = 0;
	while (str[size] && !is_sep(str[size], charset))
		size++;
	word = malloc(sizeof(char) * (size + 1));
	if (word)
	{
		i = 0;
		while (i < size)
		{
			word[i] = str[i];
			i++;
		}
		word[i] = '\0';
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	unsigned int		words;
	unsigned int		i;
	unsigned int		word;
	char				**split;

	words = count_word(str, charset);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	word = 0;
	while (str[i] && word < words)
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		split[word] = write_word(str + i, charset);
		i += ft_strlen(split[word]);
		word++;
	}
	split[words] = 0;
	return (split);
}
/*
#include <stdio.h>

int    main(void)
{
    char    **res;
    int        i;

    res = ft_split("Bonjour tout le monde", "o");
    i = 0;
    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }
	free(res);
}*/