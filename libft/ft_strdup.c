/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:03:52 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:56 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len * sizeof(char));
	if (!s2)
		return (NULL);
	s2 = ft_memcpy(s2, s1, len);
	return (s2);
}

/*int	main(void)
{
	const char	*s1 = "Hello !";
	
	printf("ft_strdup:\t%s\n", ft_strdup(s1));
	printf("strdup:\t\t%s\n", strdup(s1));
	return (0);
}*/