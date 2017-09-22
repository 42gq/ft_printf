/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_somme_option.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 06:32:46 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/22 01:30:20 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_somme_option(t_env *e)
{
	int i;

//	printf("e->plus = %i, e->ize_arg = %i, space = %i, null = %i, preci_size = %i, minus = %i, field = %i\n", e->plus, e->size_arg,  e->space, e->null, e->preci_size, e->minus, e->field_size);
	i = e->space + e->h + e->diese + e->null + e->minus
		+ e->preci_size + e->field_size + e->plus + e->l + e->j + e->z + 2;
	return (i);
}
