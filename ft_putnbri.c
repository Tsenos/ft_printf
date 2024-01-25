/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:30:48 by tifavre           #+#    #+#             */
/*   Updated: 2024/01/25 11:30:54 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbri(int n)
{
	int	nbr;
	int	len;

	nbr = n;
	len = 1;
	if (n < 0)
	{
		len += ft_putchari('-');
		if (n == -2147483648)
		{
			len += ft_putstri("2147483648");
			return (--len);
		}
		n *= (-1);
	}
	if (n / 10)
		ft_putnbri(n / 10);
	ft_putchari((n % 10 + 48));
	while (nbr / 10)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}
