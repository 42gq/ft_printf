/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 01:25:31 by gquerre           #+#    #+#             */
/*   Updated: 2018/04/03 02:44:07 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_insert(char *str, int i, char *addon)
{
	int		u;
	int		size;
	char	*mem;

	size = ft_strlen(addon);
	u = ft_strlen(str) + size;
	mem = NULL;
	if (i == 0)
	{
		if (!(mem = ft_strdup(addon)))
			return (NULL);
		if (!(mem = ft_strjoinfree(mem, str)))
			return (NULL);
	}
	else
	{
		mem = ft_strdup_until(str, i - size);
		mem = ft_strjoinfree(mem, addon);
		mem = ft_strjoin(mem, &str[i]);
	}
	ft_strdel(&str);
	return (mem);
}
