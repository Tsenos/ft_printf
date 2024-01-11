/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:48:46 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:23 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*dst_2;
	const unsigned char		*src_2;

	if (!dst && !src)
		return (NULL);
	dst_2 = dst;
	src_2 = src;
	while (n--)
		*dst_2++ = *src_2++;
	return (dst);
}

/*int	main(void)
{
	int		i;
	char	src[] = "Sa\0lut";
	char	dst1[] = "Hey \0 how are you ?";
	char	dst2[] = "Hey \0 how are you ?";

	i = 0;
	printf("ft_memcpy:\t%s\t%lu\n", (char *) ft_memcpy(dst1, src, 4), sizeof(dst1));
	printf("memcpy:\t\t%s\t%lu\n", (char *) memcpy(dst2, src, 4), sizeof(dst2));
	while (i < 19)
	{
		printf("%c, ", dst1[i]);
		i++;
	}
	i = 0;
	printf("|||\n");
	while (i < 19)
	{
		printf("%c, ", dst2[i]);
		i++;
	}
	return (0);
}*/