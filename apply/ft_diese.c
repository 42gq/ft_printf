/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diese.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 04:04:49 by gquerre           #+#    #+#             */
/*   Updated: 2017/10/02 01:35:54 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_diese(char *str, t_env *e)
{
	int		i;
	char	*add;

	i = 0;
	add = NULL;
	while (str[i] == ' ')
		i++;
	if ((e->condi == 'o' || e->condi == 'O'))
	{
		if (str[i] != '0')
			e->size++;
			add = ft_insert(str, i, "0");
		return (add);	
	}
	else
	{
		e->size += 2;
		add = ft_insert(str, i, "0x");
		return (add);	
	}
	return (str);	
}
