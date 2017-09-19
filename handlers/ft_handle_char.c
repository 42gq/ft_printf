#include "../ft_printf.h"

char	*ft_strchar(char *s1, char c)
{
	char	*res;
	int		i;

	i = 0;
	if (!(s1))
	{
		if (!(c))
			return (NULL);
		if (!(res = ft_memalloc(sizeof(char) * 2)))
			return (NULL);
		res[i] = c;
	}
	else if (!(c))
		return (s1);
	else
	{
		i = ft_strlen(s1);
		if (!(res = ft_memalloc(sizeof(char) * i + 2)))
			return (NULL);
		ft_strcpy(res, s1);
		res[i] = c;
		res[i + 1] = '\0';
	}
	return (res);
}

char	*ft_precichar(char *str, t_env *e)
{
	char	*add;
	int		i;

	i = 0;
	if (e->field > 1)
	{
				if (!(add = ft_memalloc(e->field + 1)))
					return (NULL);
		if (e->null > 0)
			{
				while (i < e->field - 1)
					add[i++] = '0';
			}
		else
			while (i < e->field - 1)
				add[i++] = ' ';
		add[e->field - 1] = str[0];
		add[e->field] = '\0';
		return (add);
	}
	return (str);
}

char	*ft_apply_optionschar(char *str, t_env *e)
{
	str = ft_precichar(str, e);
	return (str);
}

int		ft_handle_char(char v_arg, t_env *e)
{
	char *add;

	add = NULL;
	if ((add = ft_strchar(add, v_arg)))
	{
		add = ft_apply_optionschar(add, e);
		if (!(e->stock = ft_strjoinfree(e->stock, add)))
			return (-1);
	return (1);
	}
	else
		return (0);
}
