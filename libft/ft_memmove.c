/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:47:14 by tfavre            #+#    #+#             */
/*   Updated: 2022/10/26 12:55:34 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_p;
	char	*src_p;

	dst_p = (char *)dst;
	src_p = (char *)src;
	if (src == dst)
		return (dst);
	if (src_p < dst_p)
	{
		while (len--)
			*(dst_p + len) = *(src_p + len);
		return (dst);
	}
	while (len--)
		*dst_p++ = *src_p++;
	return (dst);
}
