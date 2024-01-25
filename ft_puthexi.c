/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:50:07 by timothy           #+#    #+#             */
/*   Updated: 2024/01/25 11:32:00 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexi(unsigned long long int n, int m)
{
	unsigned long long int	nbr;
	int						len;

	len = 1;
	nbr = n;
	if (n / 16)
		ft_puthexi(n / 16, m);
	if (n % 16 < 10)
		ft_putchari((n % 16 + 48));
	else if (m == 120)
		ft_putchari((n % 16 + 87));
	else
		ft_putchari((n % 16 + 55));
	while (nbr / 16)
	{
		len += 1;
		nbr /= 16;
	}
	return (len);
}
