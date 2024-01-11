/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:53:25 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:28:27 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (0);
}

static int	ft_countwords(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	ft_lenword(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_word(char const *s, char c)
{
	int		i;
	int		lenword;
	char	*word;

	i = 0;
	lenword = ft_lenword(s, c);
	word = malloc((lenword + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < lenword)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nwords;
	char	**str;

	i = 0;
	nwords = ft_countwords(s, c);
	str = malloc((nwords + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			str[i] = ft_word(s, c);
			if (!str[i])
				return (ft_free(str, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	str[i] = NULL;
	return (str);
}

/*int	main(void)
{
	char	**str;
	char	*s = "split  ||this|for|me|||||!|";
	char	c = '|';
	int		i = 0;

	str = ft_split(s, c);
	while (str[i])
	{
		printf("ft_split: %s\n", str[i]);
		i++;
	}
	return (0);
}*/