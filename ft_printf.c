/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:02:21 by timothy           #+#    #+#             */
/*   Updated: 2024/01/25 11:34:03 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convchoser(const char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchari(va_arg(args, int));
	else if (c == 's')
		i += ft_putstri(va_arg(args, char *));
	else if (c == 'p')
		i += ft_putpointi(va_arg(args, unsigned long));
	else if (c == 'c')
		i += ft_putchari(va_arg(args, int));
	else if (c == 's')
		i += ft_putstri(va_arg(args, char *));
	else if (c == 'p')
		i += ft_putpointi(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		i += ft_putnbri(va_arg(args, int));
	else if (c == 'u')
		i += ft_putnbri_uns(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		i += ft_puthexi(va_arg(args, unsigned int), c);
	else if (c == '%')
		i += ft_putchari('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			i += ft_convchoser(*format++, args);
		}
		else
			i += ft_putchari(*format++);
	}
	va_end(args);
	return (i);
}
