/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:51:31 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:02:14 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_func(unsigned int i, char c)
{
	printf("func: %c\n", c += i/i);
	return (c += i/i);
}

int	main(void)
{
	char	*str = "12345";
	char	(*funcptr)(unsigned int, char);

	funcptr = &ft_func;
	printf("ft_strmapi: %s\n", ft_strmapi(str, funcptr));
	return (0);
}*/