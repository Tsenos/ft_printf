/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:30:19 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/25 11:30:33 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointi(unsigned long p)
{
	int	len;

	len = 0;
	if (p == 0)
	{
		len += ft_putstri("0x0");
		return (3);
	}
	len += ft_putstri("0x");
	len += ft_puthexi(p, 'x');
	return (len);
}
