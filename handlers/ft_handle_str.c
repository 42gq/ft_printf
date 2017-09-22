#include "../ft_printf.h"

char	*ft_keep_size(char *str, int i)
{
	char	*res;

	res = ft_memalloc(sizeof(char) * i + 1);
	res = ft_strncpy(res, str, i);
	free(str);
	return (res);
}

char	*ft_preci_str(char *str, t_env *e)
{
	char	*add;
	int		i;
	int		k;
	int		j;

	j = 0;
	k = 0;
	i = ft_strlen(str);
	if (e->preci_size && i > e->preci)
	{
		str = ft_keep_size(str, e->preci);
		i = e->preci;
	}
	if (i < e->field)
	{
		add = ft_memalloc(e->field + 1);
		while ((e->field - (i + k)) > 0)
			add[k++] = (e->null == 1 && e->minus == 0)? '0' : ' ';
		while (k < e->field + 1)
			add[k++] = str[j++];
		free(str);
		return (add);
	}
	return (str);
}

char	*ft_apply_optionsstr(char *str, t_env *e)
{
	str = ft_preci_str(str, e);
	if (e->minus)
		str = ft_apply_minus(str);
	return (str);
}

int ft_handle_str(char *v_arg, t_env *e)
{
	char	*add;
	
	e->size_str = ft_strlen(v_arg);
	add = NULL;
	if (!(add = ft_memalloc(sizeof(char) * (e->size_str + 1))))
		return (-1);
	add = ft_strcpy(add, v_arg);
	add = ft_apply_optionsstr(add, e);
	if (!(e->stock = ft_strjoinfree(e->stock, add)))
		return (-1);
	return (1);
}
