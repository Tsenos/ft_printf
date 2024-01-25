/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:44:42 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:00:45 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fillstr(char *str, long int n, int len, int i)
{
	while (len > i)
	{
		str[len - 1] = n % 10 + 48;
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		n *= -1;
		str[i++] = '-';
	}
	ft_fillstr(str, n, len, i);
	return (str);
}

/*int	main(void)
{
	printf("ft_itoa: %s\n", ft_itoa(-2147483648));
	return (0);
}*/
