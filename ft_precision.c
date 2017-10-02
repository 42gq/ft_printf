/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 07:23:59 by gquerre           #+#    #+#             */
/*   Updated: 2017/10/02 06:34:01 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_options_field(char *str, int i, t_env *e)
{
	int	k;

	k = 0;
	if ((str[i] == '-' || str[i] == '+' || str[i] == ' ' || str[i] == '#'
		|| str[i] == '%') && e->field == 0)
	{
		e->field_size = -i;
		e->field = ft_atoi(&str[i + 1]);
		if (str[i + 1] == '0')
		{
			e->field_size -= 1;
			k++;
		}
		k += e->field_size;
	}
	return (k);
}

int		ft_check_preci(char *str, t_env *e)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (ft_isdigit(str[i]))
		i--;
	if (!(k = ft_options_field(str, i, e)))
	{
		if ((str[i] == '.') && e->preci == 0)
		{
			e->preci_size = -(i - 1);
			e->preci = ft_atoi(&str[i + 1]);
			k = e->preci_size;
		}
		else if (str[i + 1] == '0')
		{
			k = 1;
			e->null = 1;
		}
		else
			return (0);
	}
	return (k);
}

int		ft_precision(char *str, t_env *e)
{
	int	i;
	int	k;

	i = 0;
	while (str[i] != '%')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '.' && !ft_isdigit(str[i + 1])))
		{
			k = 0;
			if ((k = ft_check_preci(&str[i], e)) < 0)
				return (-1);
			if (k > 0)
				i -= (k - 1);
		}
		i--;
	}
	return (e->preci_size + e->field_size + e->null);
}
