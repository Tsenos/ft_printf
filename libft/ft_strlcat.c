/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:34:40 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:02:05 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = ft_strlen(dst);
	len = ft_strlen(dst);
	if (!dstsize || dstsize <= len)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i < dstsize - len - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (len + ft_strlen(src));
}

/*int	main(void)
{
	char	*src = "123456789";
	char	dst1[10] = "abc";
	char	dst2[10] = "abc";
	int		dstsize = 3;

	printf("\nft:\t%lu\n", ft_strlcat(dst1, src, dstsize));
	printf("st:\t%lu\n", strlcat(dst2, src, dstsize));
	return (0);
}*/