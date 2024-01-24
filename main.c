/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:18:55 by timothy           #+#    #+#             */
/*   Updated: 2024/01/21 23:20:01 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	void	*ps;
	char	string[30] = "Hello";

	ps = &string;
	printf("\n1:\t%i\n\n", ft_printf("Hellooo %cbcd%cf", 'a', 'e'));
	printf("\n2:\t%i\n\n", ft_printf("%c", '0'));
	printf("\n3:\t%i\n\n", ft_printf(" NULL %s NULL", NULL));
	printf("\n4:\t%i\n\n", ft_printf(" %c %c %c ", '0', 0, '1'));
	printf("\n5:\t%i\n\n", ft_printf(" %p ww", ps));
	printf("\n6:\t%p \n\n", ps);
	printf("\n7:\t%d\n\n", ft_puthexlow((unsigned long)ps));
	printf("\n8:\t%d\n\n", ft_printf("\n8:\t%p\n\n", LONG_MIN));
	printf("\n9:\t%d\n\n", ft_printf("\n9:\t%c %c %c \n\n", '0', 0, '1'));
	printf("\n10:\t%d \n\n", ft_printf("%d__%d", 100, 1234));
	printf("\n11:\t%d \n\n", ft_printf("%d %d %d", '0', 0, '1'));
	printf("\n12:\t%u \n\n", ft_printf("%u", -342));
	printf("\n13:\t%u \n\n", ft_printf("%x__%x__%X", 342, 3425, 3425)); // 156, d61, D61
	printf("\n14:\t%u \n\n", ft_printf(" %% "));
	printf("\n15:\t%u \n\n", ft_printf("begin\001\002\007\v\010\f\r\nend")); // for strict francinette
	printf("\n16:\t%u \n\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf(" %ld %ld\n ", LONG_MIN, LONG_MAX);
	printf("\n17:\t%u \n\n", ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
	printf("\n126:\t%u \n\n", ft_printf("%p", ""));
	return (0);
}