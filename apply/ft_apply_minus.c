/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_minus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 05:00:09 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/25 03:57:50 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_apply_minus(char *str)
{
	char	*add;
	int		i;
	int		k;
	int		j;

	add = NULL;
	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	k = i;
	while (str[i] != '\0')
		i++;
	if (!(add = ft_memalloc(sizeof(char) * i + 1)))
		return (0);
	while (k < i)
		add[j++] = str[k++];
	k = j;
	while (i - j > 0)
	{
		add[k++] = ' ';
		j++;
	}
	add[k] = '\0';
	ft_strdel(&str);
	return (add);
}
