/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:26:15 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:59 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*void	ft_func(unsigned int i, char *c)
{
	*c += i;
}

int	main(void)
{
	char	str[] = "1234";

	ft_striteri(str, ft_func);
	printf("ft_striteri: %s\n", str);
	return (0);
}*/