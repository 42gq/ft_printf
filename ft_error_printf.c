/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 05:21:12 by gquerre           #+#    #+#             */
/*   Updated: 2017/07/21 02:35:24 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write_error(int i)
{
	if (i == 1)
		ft_putstr("- format has not been allocated -\nRetry");
	if (i == 2)
		ft_putstr("- stockage format string failed -\nRetry");
	if (i == 3)
		ft_putstr("- No modifier founded after '%' -\nPlease check your arguments");
	if (i == 4)
		ft_putstr("- Bad options choice -\nPLease check your arguments");
	if (i == 5)
		ft_putstr("- Wrong options -\nPlease check your arguments5555");
	if (i == 1)
		ft_putstr("");
	if (i == 1)
		ft_putstr("");
	if (i == 1)
		ft_putstr("");
	if (i == 1)
		ft_putstr("");
}

int		ft_error_printf(int i)
{
	ft_putstr("Error ");
	ft_write_error(i);
	ft_putchar('\n');	
	return (-i);
}