/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:24:23 by timothy           #+#    #+#             */
/*   Updated: 2022/10/26 12:55:30 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src_p;
	char	*dst_p;

	src_p = (char *)src;
	dst_p = (char *)dst;
	if (src == dst)
		return (dst);
	while (n--)
		*dst_p++ = *src_p++;
	return (dst);
}

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}*/

/*int main(void)
{
	char    src[100] = {'s', 'a', 'l', '\0', 'u', 't'};
	char    dst[100];
	int     size;
	int     i;
	
	size = 6;
	i = 0;
	ft_memcpy(dst, src, 5);
	printf("Result: %s\n", dst);
	while (size - 1 > 0)
	{
		printf("%c, ", dst[i]);
		i++;
		size--;
	}
	return (0);
}*/
