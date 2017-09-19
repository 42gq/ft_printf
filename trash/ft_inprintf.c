/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 02:11:55 by gquerre           #+#    #+#             */
/*   Updated: 2017/06/20 02:42:47 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_inprintf(char *format, va_list arg, size_t res)
{
	int 	a;
	int		i;
	char	*str;

	a = 0;
	i = -1;
	while (++i < strlen(format))
	{
		while (format[i] != '\0' && format[i] != '%')
		{
			printf("%c", format[i]);
			i++;
		}
		if (format[i] == '%')
			i++;
	//	str = strchr(format, '%');
	//	printf("%s", str);
		if (format[i] == 'i' || format[i] == 'd')
		{
			a = va_arg(arg, int);
			printf("a = %i\n", a);
		}
		else if (format[i] == 'c')
		{
			a = va_arg(arg, int);
			a = (unsigned char)a;
			printf("a = %c\n", a);
		}
	}
	return (0);
}
