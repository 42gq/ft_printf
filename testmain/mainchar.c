/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 01:10:21 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/09 04:32:35 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../printf/ft_printf.h"

int	main()
{
	char s[] = "0123456789";
	char c;

	c = 'a';
	ft_printf("c = %c\n", c);
	ft_printf("c with field= %2c\n", c);
	ft_printf("c with preci= %.10c\n",(int)c);
	ft_printf("c with preci and field= %15.10c\n", (int)c);
	ft_printf("c with 0= %0c\n", (int)c);
	ft_printf("c with preci, field, 0= %015.5c\n", (int)c);
	ft_printf("c with -= %-c\n", (int)c);
	ft_printf("c with += %+c\n", (int)c);
	ft_printf("c with #= %#c\n", (int)c);
	ft_printf("c with ' '= % c\n", (int)c);
	ft_printf("c with 10' '= %          c\n", (int)c);
	ft_printf("c with j= %jc\n", (int)c);
	ft_printf("c with z= %zc\n", (int)c);
	ft_printf("c with h= %hc\n", (int)c);
	ft_printf("c with hh= %hhc\n", (int)c);
	ft_printf("c with l= %0lc\n", (int)c);
	ft_printf("c with ll= %llc\n", (int)c);
	ft_printf("s = %s\n", s);
	ft_printf("s with field= %2s\n", s);
	ft_printf("s with preci= %.10s\n",s);
	ft_printf("s with preci and field= %15.10s\n", s);
	ft_printf("s with 0= %0s\n", s);
	ft_printf("s with preci, field, 0= %015.5s\n", s);
	ft_printf("s with -= %-s\n", s);
	ft_printf("s with += %+s\n", s);
	ft_printf("s with #= %#s\n", s);
	ft_printf("s with ' '= % s\n", s);
	ft_printf("s with 10' '= %          s\n", s);
	ft_printf("s with j= %js\n", s);
	ft_printf("s with z= %zs\n", s);
	ft_printf("s with h= %hs\n", s);
	ft_printf("s with hh= %hhs\n", s);
	ft_printf("s with l= %0ls\n", s);
	ft_printf("s with ll= %lls\n", s);
	printf("oc = %c\n", c);
	printf("oc with field= %2c\n", c);
	printf("oc with preci= %.10c\n",(int)c);
	printf("oc with preci and field= %15.10c\n", (int)c);
	printf("oc with 0= %0c\n", (int)c);
	printf("oc with preci, field, 0= %015.5c\n", (int)c);
	printf("oc with -= %-c\n", (int)c);
	printf("oc with += %+c\n", (int)c);
	printf("oc with #= %#c\n", (int)c);
	printf("oc with ' '= % c\n", (int)c);
	printf("oc with 10' '= %          c\n", (int)c);
	printf("oc with j= %jc\n", (int)c);
	printf("oc with z= %zc\n", (int)c);
	printf("oc with h= %hc\n", (int)c);
	printf("oc with hh= %hhc\n", (int)c);
	printf("oc with l= %0lc\n", (int)c);
	printf("oc with ll= %llc\n", (int)c);
	printf("os = %s\n", s);
	printf("os with field= %2s\n", s);
	printf("os with preci= %.10s\n",s);
	printf("os with preci and field= %15.10s\n", s);
	printf("os with 0= %0s\n", s);
	printf("os with preci, field, 0= %015.5s\n", s);
	printf("os with -= %-s\n", s);
	printf("os with += %+s\n", s);
	printf("os with #= %#s\n", s);
	printf("os with ' '= % s\n", s);
	printf("os with 10' '= %          s\n", s);
	printf("os with j= %js\n", s);
	printf("os with z= %zs\n", s);
	printf("os with h= %hs\n", s);
	printf("os with hh= %hhs\n", s);
	printf("os with l= %0ls\n", s);
	printf("os with ll= %lls\n", s);
	return (0);
}
