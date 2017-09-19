/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:10:21 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/16 05:19:16 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../printf/ft_printf.h"

int	main()
{
	unsigned int s;
	unsigned int c;
	
	s = 152;
	c = 500000;
	ft_printf("c =% x\n", c);
	ft_printf("c with field=% 5x\n", c);
	ft_printf("c with preci=% .10x\n", c);
	ft_printf("c with field and zero2=%+02x\n", c);
	ft_printf("c with field and zero3=%+03x\n", c);
	ft_printf("c with field and zero4=%+04x\n", c);
	ft_printf("c with field and zero5=%+05x\n", c);
	ft_printf("c with field and blank2=% 02x\n", c);
	ft_printf("c with field and blank3=% 03x\n", c);
	ft_printf("c with field and blank4=% 04x\n", c);
	ft_printf("c with field and blank5=% 05x\n", c);
	ft_printf("c with preci and zero=% 0.10x\n", c);
	ft_printf("c with preci and field=% 15.10x\n", c);
	ft_printf("c with preci+++ and field=% 10.15x\n", c);
	ft_printf("c with 0=% 0x\n", c);
	ft_printf("c with preci, field, 0=% 015.5x\n", c);
	ft_printf("c with -=% -x\n", c);
	ft_printf("c with +=% +x\n", c);
	ft_printf("c with #=% #x\n", c);
	ft_printf("c with ' '=% x\n", c);
	ft_printf("c with 10' '=%          x\n", c);
	ft_printf("c with j=% jx\n", c);
	ft_printf("c with z=% zx\n", c);
	ft_printf("c with h=% hx\n", c);
	ft_printf("c with hh=% hhx\n", c);
	ft_printf("c with l=% lx\n", c);
	ft_printf("c with ll=% llx\n", c);
	ft_printf("s =%X\n", s);
	ft_printf("s with field=%2X\n", s);
	ft_printf("s with preci=%.10X\n",s);
	ft_printf("s with preci and field=%15.10X\n", s);
	ft_printf("s with 0=%0X\n", s);
	ft_printf("s with preci, field, 0=%015.5X\n", s);
	ft_printf("s with -=%-X\n", s);
	ft_printf("s with +=%+X\n", s);
	ft_printf("s with #=%#X\n", s);
	ft_printf("s with ' '=% X\n", s);
	ft_printf("s with 10' '=%          X\n", s);
	ft_printf("s with j=%jX\n", s);
	ft_printf("s with z=%zX\n", s);
	ft_printf("s with h=%hX\n", s);
	ft_printf("s with hh=%hhX\n", s);
	ft_printf("s with l=%0lX\n", s);
	ft_printf("s with ll=%llX\n", s);
	printf("oc =% x\n", c);
	printf("oc with field=% 5x\n", c);
	printf("oc with preci=% .10x\n", c);
	printf("oc with field with zero2=%+02x\n", c);
	printf("oc with field with zero3=%+03x\n", c);
	printf("oc with field with zero4=%+04x\n", c);
	printf("oc with field with zero5=%+05x\n", c);
	printf("oc with field with blank2=% 02x\n", c);
	printf("oc with field with blank3=% 03x\n", c);
	printf("oc with field with blank4=% 04x\n", c);
	printf("oc with field with blank5=% 05x\n", c);
	printf("oc with preci and zero=% 0.10x\n",(int)c);
	printf("oc with preci and field=% 15.10x\n", (int)c);
	printf("oc with preci+++ and field=% 10.15x\n", c);
	printf("oc with 0=% 0x\n", (int)c);
	printf("oc with preci, field, 0=% 015.5x\n", (int)c);
	printf("oc with -=% -x\n", (int)c);
	printf("oc with +=% +x\n", (int)c);
	printf("oc with #=% #x\n", (int)c);
	printf("oc with ' '=% x\n", (int)c);
	printf("oc with 10' '=%          x\n", (int)c);
	printf("oc with j=% jx\n", (int)c);
	printf("oc with z=% zx\n", (int)c);
	printf("oc with h=% hx\n", (int)c);
	printf("oc with hh=% hhx\n", (int)c);
	printf("oc with l=% 0lx\n", (int)c);
	printf("oc with ll=% llx\n", (int)c);
	printf("os =%X\n", s);
	printf("os with field=%2X\n", s);
	printf("os with preci=%.10X\n",s);
	printf("os with preci and field=%15.10X\n", s);
	printf("os with 0=%0X\n", s);
	printf("os with preci, field, 0=%015.5X\n", s);
	printf("os with -=%-X\n", s);
	printf("os with +=%+X\n", s);
	printf("os with #=%#X\n", s);
	printf("os with ' '=% X\n", s);
	printf("os with 10' '=%          X\n", s);
	printf("os with j=%jX\n", s);
	printf("os with z=%zX\n", s);
	printf("os with h=%hX\n", s);
	printf("os with hh=%hhX\n", s);
	printf("os with l=%0lX\n", s);
	printf("os with ll=%llX\n", s);
	return (0);
}
