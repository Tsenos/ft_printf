/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavre <tfavre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:53:06 by timothy           #+#    #+#             */
/*   Updated: 2022/10/26 14:25:37 by tfavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	len;

	len = size * count;
	dst = malloc(len);
	if (!dst)
		return (0);
	ft_bzero(dst, len);
	return ((void *)dst);
}
