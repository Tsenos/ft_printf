/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbri_uns.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:31:10 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/25 11:42:10 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbri_uns(unsigned int n)
{
	unsigned int	nbr;
	int				len;

	len = 1;
	if (n < 0)
		n += 4294967295;
	nbr = n;
	if (n / 10)
		ft_putnbri_uns(n / 10);
	ft_putchari((n % 10 + 48));
	while (nbr / 10)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}
