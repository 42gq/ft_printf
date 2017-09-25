#include "../ft_printf.h"

char	*ft_keep_size(char *str, int i)
{
	char	*res;

	res = NULL;
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

	add = NULL;
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
		add = ft_memalloc(sizeof(char) * (e->field + 1));
		while ((e->field - (i + k)) > 0)
			add[k++] = (e->null == 1 && e->minus == 0)? '0' : ' ';
		while (j < i && k < e->field + 1)
			add[k++] = str[j++];
		add[k] = '\0';
	//	printf("add = %s\n", add);
		ft_strdel(&str);
		return (add);
	}
	return (str);
}

char	*ft_apply_optionsstr(char *str, t_env *e)
{
	char	*add;

	add = NULL;
	add = ft_preci_str(str, e);
	if (e->minus)
		add = ft_apply_minus(add);
	return (add);
}

int ft_handle_str(char *v_arg, t_env *e)
{
	char	*add;
	char	*mem;
	
	mem = NULL;
	e->size_str = ft_strlen(v_arg);
//	printf("size = %i\n", e->size_str);
	add = NULL;
	if (!(add = ft_memalloc(sizeof(char) * (e->size_str + 1))))
		return (-1);
//	printf("add = %s, e->stock = %s size of add = %zi\n", add, e->stock , ft_strlen(add));
	add = ft_strcpy(add, v_arg);
	mem = ft_apply_optionsstr(add, e);
//	printf("mem = %s, e->stock = %s size of add = %zi\n", mem, e->stock , ft_strlen(mem));
	if (!(e->stock = ft_strjoinfree(e->stock, mem)))
		return (-1);
//	printf("e->stock = %s\n", e->stock);
	return (1);
}
