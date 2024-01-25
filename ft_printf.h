/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:18:43 by timothy           #+#    #+#             */
/*   Updated: 2024/01/25 11:33:46 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchari(char c);
int	ft_putstri(char *s);
int	ft_putpointi(unsigned long p);
int	ft_putnbri(int n);
int	ft_putnbri_uns(unsigned int n);
int	ft_puthexi(unsigned long long int n, int m);

#endif