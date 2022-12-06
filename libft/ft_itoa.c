/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavre <tfavre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:05:08 by timothy           #+#    #+#             */
/*   Updated: 2022/10/26 14:26:09 by tfavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n && ++len)
		n /= 10;
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*dst;
	const char	*digits = "0123456789";

	len = ft_numlen(n);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	dst[len] = 0;
	if (n == 0)
		dst[0] = '0';
	if (n < 0)
		dst[0] = '-';
	while (n)
	{
		if (n > 0)
			dst[--len] = digits[n % 10];
		else
			dst[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (dst);
}
