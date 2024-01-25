/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:34:38 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:17 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s2;

	s2 = s;
	while (n-- > 0)
	{
		if (*s2 == (unsigned char)c)
			return ((void *)s2);
		s2++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*s = "abcde";
	int			c = 'c';
	size_t		n = 4;

	printf("ft_memchr:\t%s\n", (char *)ft_memchr(s, c, n));
	printf("memchr:\t\t%s\n", (char *)ft_memchr(s, c, n));

	return (0);
}*/