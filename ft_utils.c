/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timothy <timothy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:50:07 by timothy           #+#    #+#             */
/*   Updated: 2024/01/21 23:42:45 by timothy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchari(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstri(char *s)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

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

int	ft_putnbri_unsigned(unsigned int n)
{
	unsigned int	nbr;
	int				len;

	len = 1;
	if (n < 0)
		n += 4294967295;
	nbr = n;
	if (n / 10)
		ft_putnbri_unsigned(n / 10);
	ft_putchari((n % 10 + 48));
	while (nbr / 10)
	{
		len += 1;
		nbr /= 10;
	}
	return (len);
}

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

