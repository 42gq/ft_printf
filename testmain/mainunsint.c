/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:10:21 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/15 05:05:52 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../printf/ft_printf.h"

int	main()
{
	unsigned int s;
	int c;
	
	s = 1000;
	c = -101;
	ft_printf("c =% i\n", c);
	ft_printf("c with field=% 5i\n", c);
	ft_printf("c with preci=% .10i\n", c);
	ft_printf("c with field and zero2=%+02i\n", c);
	ft_printf("c with field and zero3=%+03i\n", c);
	ft_printf("c with field and zero4=%+04i\n", c);
	ft_printf("c with field and zero5=%+05i\n", c);
	ft_printf("c with field and blank2=% 02i\n", c);
	ft_printf("c with field and blank3=% 03i\n", c);
	ft_printf("c with field and blank4=% 04i\n", c);
	ft_printf("c with field and blank5=% 05i\n", c);
	ft_printf("c with preci and zero=% 0.10i\n", c);
	ft_printf("c with preci and field=% 15.10i\n", c);
	ft_printf("c with preci+++ and field=% 10.15i\n", c);
	ft_printf("c with 0=% 0i\n", c);
	ft_printf("c with preci, field, 0=% 015.5i\n", c);
	ft_printf("c with -=% -i\n", c);
	ft_printf("c with +=% +i\n", c);
	ft_printf("c with #=% #i\n", c);
	ft_printf("c with ' '=% i\n", c);
	ft_printf("c with 10' '=%          i\n", c);
	ft_printf("c with j=% ji\n", c);
	ft_printf("c with z=% zi\n", c);
	ft_printf("c with h=% hi\n", c);
	ft_printf("c with hh=% hhi\n", c);
	ft_printf("c with l=% li\n", c);
	ft_printf("c with ll=% lli\n", c);
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
	ft_printf("s with j=%ju\n", s);
	ft_printf("s with z=%zu\n", s);
	ft_printf("s with h=%hu\n", s);
	ft_printf("s with hh=%hhu\n", s);
	ft_printf("s with l=%0lu\n", s);
	ft_printf("s with ll=%llu\n", s);
	printf("oc =% i\n", c);
	printf("oc with field=% 5i\n", c);
	printf("oc with preci=% .10i\n", c);
	printf("oc with field with zero2=%+02i\n", c);
	printf("oc with field with zero3=%+03i\n", c);
	printf("oc with field with zero4=%+04i\n", c);
	printf("oc with field with zero5=%+05i\n", c);
	printf("oc with field with blank2=% 02i\n", c);
	printf("oc with field with blank3=% 03i\n", c);
	printf("oc with field with blank4=% 04i\n", c);
	printf("oc with field with blank5=% 05i\n", c);
	printf("oc with preci and zero=% 0.10i\n",(int)c);
	printf("oc with preci and field=% 15.10i\n", (int)c);
	printf("oc with preci+++ and field=% 10.15i\n", c);
	printf("oc with 0=% 0i\n", (int)c);
	printf("oc with preci, field, 0=% 015.5i\n", (int)c);
	printf("oc with -=% -i\n", (int)c);
	printf("oc with +=% +i\n", (int)c);
	printf("oc with #=% #i\n", (int)c);
	printf("oc with ' '=% i\n", (int)c);
	printf("oc with 10' '=%          i\n", (int)c);
	printf("oc with j=% ji\n", (int)c);
	printf("oc with z=% zi\n", (int)c);
	printf("oc with h=% hi\n", (int)c);
	printf("oc with hh=% hhi\n", (int)c);
	printf("oc with l=% 0li\n", (int)c);
	printf("oc with ll=% lli\n", (int)c);
	printf("os =%u\n", s);
	printf("os with field=%2u\n", s);
	printf("os with preci=%.10u\n",s);
	printf("os with preci and field=%15.10u\n", s);
	printf("os with 0=%0u\n", s);
	printf("os with preci, field, 0=%015.5u\n", s);
	printf("os with -=%-u\n", s);
	printf("os with +=%+u\n", s);
	printf("os with #=%#u\n", s);
	printf("os with ' '=% u\n", s);
	printf("os with 10' '=%          u\n", s);
	printf("os with j=%ju\n", s);
	printf("os with z=%zu\n", s);
	printf("os with h=%hu\n", s);
	printf("os with hh=%hhu\n", s);
	printf("os with l=%0lu\n", s);
	printf("os with ll=%llu\n", s);
	return (0);
}
