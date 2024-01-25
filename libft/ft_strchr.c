/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:44:00 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:52 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (NULL);
	return ((char *)s);
}

/*int	main(void)
{
	printf("ft_strchr:\t%s\n", ft_strchr("ab\0cde", '\0'));
	printf("strchr:\t\t%s", strchr("ab\0cde", '\0'));
	return (0);
}*/