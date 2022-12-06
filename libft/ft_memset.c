/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 17:43:13 by timothy           #+#    #+#             */
/*   Updated: 2022/10/26 12:55:43 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	char	*str2;

	str2 = str;
	while (size--)
		*str2++ = c;
	return (str);
}

/*int main(void)
{
	char buffer[20 + 1];
	char *string;

	memset(buffer, 0, sizeof(buffer));
	string = memset(buffer,'A', 10);
	printf("\nBuffer contents: %s\n", string);
	memset(buffer+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer);

	ft_memset(buffer, 0, sizeof(buffer));
	string = ft_memset(buffer,'A', 10);
	printf("\nBuffer contents: %s\n", string);
	ft_memset(buffer+10, 'B', 10);
	printf("\nBuffer contents: %s\n", buffer);
}*/
