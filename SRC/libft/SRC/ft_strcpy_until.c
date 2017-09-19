/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_until.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 03:54:17 by gquerre           #+#    #+#             */
/*   Updated: 2017/07/03 08:52:32 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy_until(char *str, size_t i)
{
	size_t	k;
	char	*dst;

	k = 0;
	if (!(dst = ft_memalloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (str[k] != '\0' && k < i + 1)
	{
		dst[k] = str[k];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}
