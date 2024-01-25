/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:38:00 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:02:21 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (!needle[j + 1])
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*haystack = "lorem ipsum dolor sit amet";
	const char	*needle = "ipsum";
	size_t		len = 15;

	printf("ft_strnstr:\t%s\n", ft_strnstr(haystack, needle, len));
	printf("strnstr:\t%s\n", strnstr(haystack, needle, len));
	return (0);
}*/