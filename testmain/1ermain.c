/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 00:25:34 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/09 01:14:25 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main()
{	
	char	c;
	char	*str;
	int		i;	
	unsigned int	o;
	wint_t	cc;
	wchar_t	*ss;

	setlocale(LC_ALL, "");
	i = -1;
	str = ft_memalloc(sizeof(char) * 11);
	c = 'a';
	cc = 10;
	o = 24500;
	ss = ft_memalloc(sizeof(wint_t) * 11);
	while (++i < 10)
	{
		str[i] = i + 48;
		ss[i] = cc + i;	
	}
	str[i] = '\0';
	ss[i] = '\0';
	/*	int				ii;
	char			c;
	char			cc;
	char			*s;
	char			*ss;
	void			*p;
	unsigned int	oo;

	*/i = -100;/*
	ii = ;
	c = ;
	s = ;
	ss = ;
	p = ;
	oo = ;

*/	ft_printf("FormatSimple\n");
	printf("oFormatSimple\n");
	ft_printf("Int = %i, Char = %c, Str = %s & 'percent' : %%\n", i, c, str);
	printf("oInt = %i, Char = %c, Str = %s & 'percent' : %%\n", i, c, str);
	ft_printf("'c' Char : %c\n", c);
	printf("o'c' Char : %c\n", c);
	ft_printf("'c' Char with preci: %.10c\n", c);
	printf("o'c' Char with preci: %.10c\n", c);
	ft_printf("'c' Char with field: %10c\n", c);
	printf("o'c' Char with field: %10c\n", c);
	ft_printf("'c' Char with 0: %0c\n", c);
	printf("o'c' Char with 0: %0c\n", c);
	ft_printf("'c' Char with 0 et field: %010c\n", c);
	printf("o'c' Char with 0 et field: %010c\n", c);
	printf("o'C' synonyme de lc : %C\n", cc);
	ft_printf("'C' synonyme de lc : %C\n", cc);
	ft_printf("'s' String : %s\n", str);
	printf("o's' String : %s\n", str);/*
*/	ft_printf("'s' String with preci: %.5s\n", str);/*
*/	printf("o's' String with preci: %.5s\n", str);/*
*/	ft_printf("'s' String with zero: %0s\n", str);/*
*/	printf("o's' String with zero: %0s\n", str);/*
*/	ft_printf("'s' String with field : %15s\n", str);/*
*/	printf("o's' String with field : %15s\n", str);/*
*/	ft_printf("'s' String with preci & field & zero : %015.10s\n", str);/*
*/	printf("o's' String with preci & field & zero : %015.10s\n", str);/*
*/	ft_printf("'s' String with preci & field & zero : %-015.10s\n", str);/*
*/	printf("o's' String with preci & field & zero : %-015.10s\n", str);/*
*/	ft_printf("'s' String field & zero : %015s\n", str);/*
*/	printf("o's' String field & zero : %015s\n", str);/*
*/	ft_printf("'s' preci & zero String : %0.10s\n", str);/*
*/	printf("o's' preci & zero String : %0.10s\n", str);/*
*/	ft_printf("'s' preci & field String : %15.5s\n", str);
	printf("o's' preci & field String : %15.5s\n", str);
	printf("o'S' synonyme de ls : %S\n", ss);
	ft_printf("'S' synonyme de ls : %S\n", ss);
	/*
	printf("'p' Argument du pointeur en hexa : %p\n", p);*/
	ft_printf("'d' Int avec 'd' : {%d}\n", i);
	printf("o'd' Int avec 'd' : {%d}\n", i);
//	printf("'D' synonyme de ld : %D\n", ii);
	ft_printf("'i' Int avec 'i' : {%10.5i}\n", i);
	printf("o'i' Int avec 'i' : {%10.5i}\n", i);
	ft_printf("'i' Int avec 'i' : {%.5i}\n", i);
	printf("o'i' Int avec 'i' : {%.5i}\n", i);
	ft_printf("'i' Int avec 'i' : {%10i}\n", i);
	printf("o'i' Int avec 'i' : {%10i}\n", i);
/*	printf("'o' Unsigned Int Convert into Octal with : %o\n", o);
*//*	printf("'O' synonyme de lo : %O\n", oo);
*/	ft_printf("'u' Unsigned Int Convert into Decimal : %u\n", o);
	printf("o'u' Unsigned Int Convert into Decimal : %u\n", o);
/*	printf("'U' synonyme de lu : %U\n", oo);
*/	ft_printf("'x' Unsigned Int Convert into Hexa : %x\n", o);
	printf("o'x' Unsigned Int Convert into Hexa : %x\n", o);
/*	printf("'X' synonyme de lx : %X\n", oo);
	printf("OPTION : ,avec % \n", );*/
	return (0);
}
