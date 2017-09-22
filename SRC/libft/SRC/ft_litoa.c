/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_litoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 01:28:46 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/20 01:54:22 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(long int n)
{
	int	neg;

	if (n < 0)
		neg = 1;
	else
		neg = 0;
	return (neg);
}

char		*ft_litoa(long int n)
{
	long int	tmp;
	int			len;
	int			neg;
	char		*str;

	if (n == -4294967296)
		return (ft_strdup("-4294967296"));
	tmp = n;
	neg = ft_sign(n);
	len = (neg) ? 3 : 2;
	while (tmp /= 10)
		len++;
	if (!(str = malloc(sizeof(char) * len)))
		return (NULL);
	if (neg)
		n *= -1;
	str[--len] = '\0';
	while (len--)
	{
		str[len] = (n % 10 + 48);
		n /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
