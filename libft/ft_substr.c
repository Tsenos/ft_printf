/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavre <tfavre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:27:47 by tfavre            #+#    #+#             */
/*   Updated: 2022/10/26 18:27:37 by tfavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*dst;
	char	*start_dst;

	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		dst = ft_calloc(1, sizeof(char));
		if (!dst)
			return (0);
		return (dst);
	}
	if (len_s - start < len)
		dst = ft_calloc(len_s - start + 1, sizeof(char));
	else
		dst = ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (0);
	start_dst = dst;
	s += start;
	while (*s && len--)
		*dst++ = *s++;
	return (start_dst);
}
