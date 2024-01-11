/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:22:12 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:00:22 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		nbr = nbr * 10 + (str[i++] - 48);
	return (nbr * sign);
}

/*int	main(void)
{
	const char	*str = " \t  -912a3";
	
	printf("ft_atoi:\t%i\n", ft_atoi(str));
	printf("atoi:\t\t%i\n", atoi(str));
	return (0);
}*/