/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_longint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:02:26 by gquerre           #+#    #+#             */
/*   Updated: 2017/08/02 06:51:37 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*char	*ft_stocklongitoa(long l)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;


	return (str);
}
*/

int		ft_handle_longint(long v_arg, t_env *e)
{
	char	*add;

	add = NULL;
	add = ft_memalloc(sizeof(char) * ft_strlen((char *)v_arg + 1));
	add = ft_strcpy(add, ft_itoa((int)v_arg));
//	if (!(add = ft_stocklongitoa(v_arg)))
//		return (-1);
//	add = ft_apply_longoptions(add, e);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
