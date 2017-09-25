/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 00:47:34 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/25 04:38:55 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_cast(t_env *e, va_list arg, int uns)
{
	if (uns == 1)
	{
		e->nbr = va_arg(arg, uintmax_t);
		if (e->h == 1)
		{
			e->nbr = (unsigned short int)e->nbr;
			ft_handle_sunt(e);
		}
		else if (e->h == 2)
		{
			e->nbr = (unsigned char)e->nbr;
			ft_handle_ssunt(e);
		}
		else if (e->j == 1)
		{
			e->nbr = (unsigned long long int)e->nbr;
			ft_handle_llunt(e);
		}
		else if (e->z == 1)
		{
			e->nbr = (size_t)e->nbr;
			ft_handle_lunt(e);
		}
		else if (e->l == 1)
		{
			e->nbr = (unsigned long int)e->nbr;
			ft_handle_lunt(e);
		}
		else if (e->l == 2)
		{
			e->nbr = (unsigned long long int)e->nbr;
			ft_handle_llunt(e);
		}
		else
		{
			e->nbr = (unsigned int)e->nbr;
			ft_handle_unt(e);
		}
	}
	else
	{
		e->nbrs = va_arg(arg, long long int);
		if (e->h == 1)
		{
			e->nbrs = (signed short int)e->nbrs;
			ft_handle_shortint(e);
		}
		else if (e->h == 2)
		{
			e->nbrs = (char)e->nbrs;
			ft_handle_ssint(e);
		}
		else if (e->j == 1)
		{
			e->nbrs = (long long int)e->nbrs;
			ft_handle_longlongint(e);
		}
		else if (e->z == 1)
		{
			e->nbrs = (size_t)e->nbrs;
			ft_handle_longint(e);
		}
		else if (e->l == 1)
		{
			e->nbrs = (long int)e->nbrs;
			ft_handle_longint(e);
		}
		else if (e->l == 2)
		{
			e->nbrs = (long long int)e->nbrs;
			ft_handle_longlongint(e);
		}
		else
		{
			e->nbrs = (int)e->nbrs;
			ft_handle_int(e);
		}
	}
}
