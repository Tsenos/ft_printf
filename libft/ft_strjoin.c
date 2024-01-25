/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:06:57 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:02:02 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		strlen;
	char	*str;

	strlen = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((strlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, strlen + 1);
	return (str);
}

/*int	main(void)
{
	char const	*s1 = "Hello, ";
	char const	*s2 = "How are you ?";
	
	printf("ft_strjoin:\t%s\n", ft_strjoin(s1, s2));
	return (0);
}*/