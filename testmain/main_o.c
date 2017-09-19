/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:10:21 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/16 02:53:57 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../printf/ft_printf.h"

int	main()
{
	unsigned int s;
	int c;
	
	s = 500000000000;
	c = 354;
	ft_printf("c =% o\n", c);
	ft_printf("c with field=% 5o\n", c);
	ft_printf("c with preci=% .10o\n", c);
	ft_printf("c with field and zero2=%+02o\n", c);
	ft_printf("c with field and zero3=%+03o\n", c);
	ft_printf("c with field and zero4=%+04o\n", c);
	ft_printf("c with field and zero5=%+05o\n", c);
	ft_printf("c with field and blank2=% 02o\n", c);
	ft_printf("c with field and blank3=% 03o\n", c);
	ft_printf("c with field and blank4=% 04o\n", c);
	ft_printf("c with field and blank5=% 05o\n", c);
	ft_printf("c with preci and zero=% 0.10o\n", c);
	ft_printf("c with preci and field=% 15.10o\n", c);
	ft_printf("c with preci+++ and field=% 10.15o\n", c);
	ft_printf("c with 0=% 0o\n", c);
	ft_printf("c with preci, field, 0=% 015.5o\n", c);
	ft_printf("c with -=% -o\n", c);
	ft_printf("c with +=% +o\n", c);
	ft_printf("c with #=% #o\n", c);
	ft_printf("c with ' '=% o\n", c);
	ft_printf("c with 10' '=%          o\n", c);
	ft_printf("c with j=% jo\n", c);
	ft_printf("c with z=% zo\n", c);
	ft_printf("c with h=% ho\n", c);
	ft_printf("c with hh=% hho\n", c);
	ft_printf("c with l=% lo\n", c);
	ft_printf("c with ll=% llo\n", c);
	ft_printf("s =%o\n", s);
	ft_printf("s with field=%2o\n", s);
	ft_printf("s with preci=%.10o\n",s);
	ft_printf("s with preci and field=%15.10o\n", s);
	ft_printf("s with 0=%0o\n", s);
	ft_printf("s with preci, field, 0=%015.5o\n", s);
	ft_printf("s with -=%-o\n", s);
	ft_printf("s with +=%+o\n", s);
	ft_printf("s with #=%#o\n", s);
	ft_printf("s with ' '=% o\n", s);
	ft_printf("s with 10' '=%          o\n", s);
	ft_printf("s with j=%jo\n", s);
	ft_printf("s with z=%zo\n", s);
	ft_printf("s with h=%ho\n", s);
	ft_printf("s with hh=%hho\n", s);
	ft_printf("s with l=%0lo\n", s);
	ft_printf("s with ll=%llo\n", s);
	printf("oc =% o\n", c);
	printf("oc with field=% 5o\n", c);
	printf("oc with preci=% .10o\n", c);
	printf("oc with field with zero2=%+02o\n", c);
	printf("oc with field with zero3=%+03o\n", c);
	printf("oc with field with zero4=%+04o\n", c);
	printf("oc with field with zero5=%+05o\n", c);
	printf("oc with field with blank2=% 02o\n", c);
	printf("oc with field with blank3=% 03o\n", c);
	printf("oc with field with blank4=% 04o\n", c);
	printf("oc with field with blank5=% 05o\n", c);
	printf("oc with preci and zero=% 0.10o\n",(int)c);
	printf("oc with preci and field=% 15.10o\n", (int)c);
	printf("oc with preci+++ and field=% 10.15o\n", c);
	printf("oc with 0=% 0o\n", (int)c);
	printf("oc with preci, field, 0=% 015.5o\n", (int)c);
	printf("oc with -=% -o\n", (int)c);
	printf("oc with +=% +o\n", (int)c);
	printf("oc with #=% #o\n", (int)c);
	printf("oc with ' '=% o\n", (int)c);
	printf("oc with 10' '=%          o\n", (int)c);
	printf("oc with j=% jo\n", (int)c);
	printf("oc with z=% zo\n", (int)c);
	printf("oc with h=% ho\n", (int)c);
	printf("oc with hh=% hho\n", (int)c);
	printf("oc with l=% 0lo\n", (int)c);
	printf("oc with ll=% llo\n", (int)c);
	printf("os =%o\n", s);
	printf("os with field=%2o\n", s);
	printf("os with preci=%.10o\n",s);
	printf("os with preci and field=%15.10o\n", s);
	printf("os with 0=%0o\n", s);
	printf("os with preci, field, 0=%015.5o\n", s);
	printf("os with -=%-o\n", s);
	printf("os with +=%+o\n", s);
	printf("os with #=%#o\n", s);
	printf("os with ' '=% o\n", s);
	printf("os with 10' '=%          o\n", s);
	printf("os with j=%jo\n", s);
	printf("os with z=%zo\n", s);
	printf("os with h=%ho\n", s);
	printf("os with hh=%hho\n", s);
	printf("os with l=%0lo\n", s);
	printf("os with ll=%llo\n", s);
	return (0);
}
