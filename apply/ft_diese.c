/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diese.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 04:04:49 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/29 03:37:20 by gquerre          ###   ########.fr       */
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
			add = ft_insert(str, i, "0");
		return (add);	
	}
	else
	{
		add = ft_insert(str, i, "0x");
		return (add);	
	}
	return (str);	
}
