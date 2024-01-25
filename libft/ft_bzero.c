/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:28:17 by timothy           #+#    #+#             */
/*   Updated: 2024/01/24 09:55:34 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	size_t			i;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
		s2[i++] = 0;
}

/*int main(int argc, char **argv)
{
	size_t i;

	i = strlen(argv[1]);
	(void)argc;
	printf("Src: %s\n", argv[1]);
	ft_bzero(argv[1], atoi(argv[2]));
	printf("Dest: %s\n", argv[1]);
	while (i > 0)
	{
		printf("%c, ", *argv[1]);
		argv[1]++;
		i--;
	}
	return (0);
}*/
