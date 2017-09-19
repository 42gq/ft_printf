/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 03:31:43 by gquerre           #+#    #+#             */
/*   Updated: 2017/09/19 03:25:27 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*char	*ft_preci_int(char *str, t_env *e)
{
	char	*add;
	int		i;
	int		u;
	int		j;

	u = 0;
	j = 0;
	i = ft_strlen(str);
	if (i < e->field || i < e->preci)
	{
		u = (e->field > e->preci)? e->field : e->preci;
		add = ft_memalloc(sizeof(char) * u + 1);
		printf("e->preci = %d, e->field = %d, i = %d, e->null = %d\n", e->preci, e->field, i,  e->null);
		while (e->preci + j < e->field && j < e->field - i)
		{
			if (e->preci == 0)
				add[j++] = (e->null == 1)? '0' : ' ';
			else
				add[j++] = ' ';
		}
		while ((u - j) > i)
			add[j++] = '0';
		add[j] = '\0';
		add = ft_strjoinfree(add, str);
		free(str);

		return (add);	
	}
	return (str);
}

char	*ft_add_minus(char *str, t_env *e, int i, int j)
{
	char	*add;

	add = NULL;
	if (i != 0)
	{
		add = ft_strnew(j);
		str[i - 1] = '-';
		add = ft_strcpy(add, str);
	}
	else if (e->field == j && str[0] == '0')
	{
		add = ft_strdup(str);
		add[0] = '-';
	}
	else 
	{
		add = ft_strnew(1);
		add[0] = '-';
		add = ft_strjoin(add, str);
	}
	while (j > 0 && add[j] != ' ' && add[j] != '-')
		j--;
	if (add[j] == ' ' && j >= 1 && (add[j - 1] == '0' || add[j - 1] == '-'))
		add[j] = '0';
	ft_strdel(&str);
	return (add);
}
char	*ft_minus(char *str, t_env *e)
{
	char	*add;
	int		i;
	int		j;
	int		check;

	check = 0;
	i = 0;
	add = NULL;
	j = ft_strlen(str);

	while (str[i] != '\0' && check == 0)
		check = (str[i++] == '-')? 1 : 0;
	if (check == 1)
	{
		str[i - 1] = ' ';
		i = 0;
		while (str[i] != '\0' && str[i] == ' ')
			i++;
		add = ft_add_minus(str, e, i, j);
		return (add);
	}
	return (str);
}

char	*ft_signs_pass(char *str, t_env *e)
{
	char	*add;
	int		i;
	int		j;

	add = NULL;
	j = 0;
	i = ft_strlen(str);
	printf("IIIIIIII = %i\n", i);
	if ((e->plus || e->space) && !ft_strchr(str, '-'))
	{
		while (j <= i && str[j] == ' ')
			j++;
		if (str[j] != '\0' && j == 0 && (e->preci == i || (e->field <= i && str[j] != '0')))
		{
			add = ft_strnew(1);
			add[0] = (e->plus)? '+' : ' ';
			add = ft_strjoinfree(add, str);
		}
		else if (str[j] != '\0' && j == 0 && e->field == i && (str[j] == ' ' || str[j] == '0'))
		{
			add = ft_strdup(str);
			add[j] = (e->plus)? '+' : ' ';
		}	
		else if (str[j] != '\0' && j > 0)
		{
			add = ft_strdup(str);
			add[j - 1] = (e->plus)? '+' : ' ';
		}
		else
			return (str);
		ft_strdel(&str);
		return (add);
	}
	return (str);
}

char	*ft_apply_options(char *str, t_env *e)
{	
	str = ft_apply_preci(str, e);
	printf("str1 =%s\n", str);
	str = ft_minus(str, e);
	printf("str2 =%s\n", str);
	str = ft_signs_pass(str, e);
	return (str);
}
*/
char	*ft_stockitoa(int a)
{
	char	*str;

	str = ft_itoa(a);
	return (str);
}

int		ft_handle_int(int v_arg, t_env *e)
{
	char	*add;
	
	add = NULL;

	if (!(add = ft_stockitoa(v_arg)))
		return (-1);
	add = ft_apply_options(add, e);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
