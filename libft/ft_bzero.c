/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:36:58 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:00:25 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str++ = 0;
		n--;
	}
}

/*int	main(void)
{
	int		i;
	char	str[] = "Hey \0 how are you ?";
	
	i = 0;
	ft_bzero(str, 6);
	while (i < 19)
	{
		printf("%c| ", str[i]);
		i++;
	}
	//printf("\nNew str: %s\n", str);
	return (0);
}*/