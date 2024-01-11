/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:19:23 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/11 10:39:01 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
				printf("%d", va_arg(args, int));
			else if (*format == 's')
				printf("%s", va_arg(args, char *));
		}
		else
			//printf("%c", va_arg(args, char));
			ft_putchar(*format);
		format++;
	}
	
	va_end(args);

	return (1);
}

int	main(void)
{
	if (ft_printf("Hello %s, number is %d\n", "World", 42))
		return (0);
	return (0);
}
