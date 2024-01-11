/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:12:30 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:02:23 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*s = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	int			c = '\0';

	printf("ft_strrchr:\t\t%s\n", ft_strrchr(s, c));
	printf("strrchr:\t\t%s", strrchr(s, c));
	return (0);
}*/