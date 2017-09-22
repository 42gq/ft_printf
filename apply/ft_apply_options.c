/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_options.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 04:55:48 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/22 03:50:22 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_apply_options(char *str, t_env *e)
{
	str = ft_apply_preci(str, e);
	if (e->condi != 's' && e->condi != 'o' && e->condi != 'x' && e->condi != 'X' && e->condi != 'u' && e->condi != 'U')
	{
		str = ft_minus(str, e);
		str = ft_signs_pass(str, e);
	}
	if (e->minus == 1)
		str = ft_apply_minus(str);
	return (str);
}
