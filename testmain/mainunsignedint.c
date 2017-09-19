/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:10:21 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/15 02:44:01 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../printf/ft_printf.h"

int	main()
{
	unsigned int s;
	unsigned int c;
	
	s = 1000;
	c = 10;
	ft_printf("c =% u\n", c);
	ft_printf("c with field=% 5u\n", c);
	ft_printf("c with preci=% .10u\n", c);
	ft_printf("c with field and zero2=%+02u\n", c);
	ft_printf("c with field and zero3=%+03u\n", c);
	ft_printf("c with field and zero4=%+04u\n", c);
	ft_printf("c with field and zero5=%+05u\n", c);
	ft_printf("c with field and blank2=% 02u\n", c);
	ft_printf("c with field and blank3=% 03u\n", c);
	ft_printf("c with field and blank4=% 04u\n", c);
	ft_printf("c with field and blank5=% 05u\n", c);
	ft_printf("c with preci and zero=% 0.10u\n", c);
	ft_printf("c with preci and field=% 15.10u\n", c);
	ft_printf("c with preci+++ and field=% 10.15u\n", c);
	ft_printf("c with 0=% 0u\n", c);
	ft_printf("c with preci, field, 0=% 015.5u\n", c);
	ft_printf("c with -=% -u\n", c);
	ft_printf("c with +=% +u\n", c);
	ft_printf("c with #=% #u\n", c);
	ft_printf("c with ' '=% u\n", c);
	ft_printf("c with 10' '=%          u\n", c);
	ft_printf("c with j=% ju\n", c);
	ft_printf("c with z=% zu\n", c);
	ft_printf("c with h=% hu\n", c);
	ft_printf("c with hh=% hhu\n", c);
	ft_printf("c with l=% lu\n", c);
	ft_printf("c with ll=% llu\n", c);
	ft_printf("s =%u\n", s);
	ft_printf("s with field=%2u\n", s);
	ft_printf("s with preci=%.10u\n",s);
	ft_printf("s with preci and field=%15.10u\n", s);
	ft_printf("s with 0=%0u\n", s);
	ft_printf("s with preci, field, 0=%015.5u\n", s);
	ft_printf("s with -=%-u\n", s);
	ft_printf("s with +=%+u\n", s);
	ft_printf("s with #=%#u\n", s);
	ft_printf("s with ' '=% u\n", s);
	ft_printf("s with 10' '=%          u\n", s);
	ft_printf("s with j= %ju\n", s);
	ft_printf("s with z= %zu\n", s);
	ft_printf("s with h= %hu\n", s);
	ft_printf("s with hh= %hhu\n", s);
	ft_printf("s with l= %0lu\n", s);
	ft_printf("s with ll= %llu\n", s);
	printf("oc =% u\n", c);
	printf("oc with field=% 5u\n", c);
	printf("oc with preci=% .10u\n", c);
	printf("oc with field with zero2=%+02u\n", c);
	printf("oc with field with zero3=%+03u\n", c);
	printf("oc with field with zero4=%+04u\n", c);
	printf("oc with field with zero5=%+05u\n", c);
	printf("oc with field with blank2=% 02u\n", c);
	printf("oc with field with blank3=% 03u\n", c);
	printf("oc with field with blank4=% 04u\n", c);
	printf("oc with field with blank5=% 05u\n", c);
	printf("oc with preci and zero=% 0.10u\n",(int)c);
	printf("oc with preci and field=% 15.10u\n", (int)c);
	printf("oc with preci+++ and field=% 10.15u\n", c);
	printf("oc with 0=% 0u\n", (int)c);
	printf("oc with preci, field, 0=% 015.5u\n", (int)c);
	printf("oc with -=% -u\n", (int)c);
	printf("oc with +=% +u\n", (int)c);
	printf("oc with #=% #u\n", (int)c);
	printf("oc with ' '=% u\n", (int)c);
	printf("oc with 10' '=%          u\n", (int)c);
	printf("oc with j=% ju\n", (int)c);
	printf("oc with z=% zu\n", (int)c);
	printf("oc with h=% hu\n", (int)c);
	printf("oc with hh=% hhu\n", (int)c);
	printf("oc with l=% 0lu\n", (int)c);
	printf("oc with ll=% llu\n", (int)c);
	printf("os = %u\n", s);
	printf("os with field= %2u\n", s);
	printf("os with preci= %.10u\n",s);
	printf("os with preci and field= %15.10u\n", s);
	printf("os with 0= %0u\n", s);
	printf("os with preci, field, 0= %015.5u\n", s);
	printf("os with -= %-u\n", s);
	printf("os with += %+u\n", s);
	printf("os with #= %#u\n", s);
	printf("os with ' '= % u\n", s);
	printf("os with 10' '= %          u\n", s);
	printf("os with j= %ju\n", s);
	printf("os with z= %zu\n", s);
	printf("os with h= %hu\n", s);
	printf("os with hh= %hhu\n", s);
	printf("os with l= %0lu\n", s);
	printf("os with ll= %llu\n", s);
	return (0);
}
