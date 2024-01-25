/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:50:39 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:26 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dst_2;
	const unsigned char		*src_2;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	dst_2 = dst;
	src_2 = src;
	while (len--)
			dst_2[len] = src_2[len];
	return (dst);
}

/*int	main(void)
{
	char	src1[16] = "abcdefgh";
	char	src2[16] = "abcdefgh";

	printf("ft:\t%s\t%lu\n", (char *) ft_memmove(src1 + 1, src1, 4));
	printf("m:\t%s\t%lu\n", (char *) memmove(src2 + 1, src2, 4));
	return (0);
}*/
