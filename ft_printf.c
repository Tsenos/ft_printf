/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:02:21 by timothy           #+#    #+#             */
/*   Updated: 2024/01/22 10:06:03 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*make re && make clean && gcc -Wall -Werror -Wextra libftprintf.a main.c && ./a.out && rm a.out*/

// c = va_arg(args, int)
// s = va_arg(args, char *)
// d = va_arg(args, int)
// i = va_arg(args, int)
// u = va_arg(args, unsigned int)
// p = va_arg(args, unsigned long)# or 
//                                #(unsigned long)va_arg(args, void *);
// x = va_arg(args, unsigned int)
// X = va_arg(args, unsigned int)

// int	ft_convchoser(const char c, va_list args)
// {
// 	int	i;

// 	i = 0;
// 	if (c == 'c')
// 		i += ft_putchari(va_arg(args, int));
// 	else if (c == 's')
// 		i += ft_putstri(va_arg(args, char *));
// 	else if (c == 'p')
// 		i += ft_putpointi(va_arg(args, unsigned long));
// 	return (i);
// }

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list args;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				i += ft_putchari(va_arg(args, int));
			else if (*format == 's')
				i += ft_putstri(va_arg(args, char *));
			else if (*format == 'p')
				i += ft_putpointi(va_arg(args, unsigned long));
			else if (*format == 'd'|| *format == 'i')
				i += ft_putnbri(va_arg(args, int));
			else if (*format == 'u')
				i += ft_putnbri_unsigned(va_arg(args, unsigned int));
			else if (*format == 'x' || *format == 'X')
				i += ft_puthexi(va_arg(args, unsigned int), *format);
			else if (*format == '%')
			{
				i += ft_putchari('%');
			}
			format++;
		}
		else
			i += ft_putchari(*format++);
	}
	va_end(args);
	return (i);
}

// int	ft_printf(const char *format, ...)
// {
// 	int		i;
// 	va_list args;

// 	i = 0;
// 	va_start(args, format);
// 	while (*format)
// 	{
// 		if (*format == '%')
// 		{
// 			format++;
// 			i += ft_convchoser(*format++, args);
// 		}
// 		else
// 			i += ft_putchari(*format++);
// 	}
// 	va_end(args);
// 	return (i);
// }


// i• %c Prints a single character.
// c*• %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// i• %d Prints a decimal (base 10) number.
// i• %i Prints an integer in base 10.
// i• %u Prints an unsigned decimal (base 10) number.
// i• %x Prints a number in hexadecimal (base 16) lowercase format.
// i• %X Prints a number in hexadecimal (base 16) uppercase format.
// c• %% Prints a percent sign.