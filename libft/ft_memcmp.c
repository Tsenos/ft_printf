/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:24:02 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:20 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1cpy;
	const unsigned char	*s2cpy;
	size_t				i;

	s1cpy = s1;
	s2cpy = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1cpy[i] == s2cpy[i] && i < n - 1)
		i++;
	return (s1cpy[i] - s2cpy[i]);
}

/*int	main(void)
{
	const char	*s1 = "abc";
	const char	*s2 = "abc\24567";
	size_t		n = 4;

	printf("ft_memcmp:\t%i\n", ft_memcmp(s1, s2, n));
	printf("memcmp:\t\t%i\n", memcmp(s1, s2, n));
	return (0);
}*/