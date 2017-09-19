/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_wstring.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 06:00:26 by gquerre           #+#    #+#             */
/*   Updated: 2017/07/31 06:41:48 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_handle_wstring(wchar_t *v_arg, t_env *e)
{
	char	*add;
	int		i;

	i = 0;
	add = NULL;
	while (v_arg[i])
	{
		add = ft_conv_wint_to_str(v_arg[i], e);
		if (!(e->stock = ft_strjoinfree(e->stock, add)))
			return (-1);
		i++;
	}
		return (1);
}
