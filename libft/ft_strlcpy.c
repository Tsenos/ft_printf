/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:33:00 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/10 12:02:08 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	*src = "1234567";
	char	dst1[] = "abcde";
	char	dst2[] = "abcde";
	int		dstsize = 0;

	printf("\nft:\t%lu\n", ft_strlcpy(dst1, src, dstsize));
	printf(":\t%lu\n", strlcpy(dst2, src, dstsize));
	return (0);
}*/