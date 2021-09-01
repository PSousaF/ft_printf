#include "ft_printf.h"

int	ft_strlenP(uintptr_t n)
{
	int	j;

	j = 0;
	while (n / 10 != 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

char	*ft_calcXP(uintptr_t value)
{
	int		res;
	int		i;
	char	*ret;

	res = 0;
	i = ft_strlenP(value);
	if (!value)
		return (retZero());
	ret = (char *)malloc(i + 1);
	i = 0;
	while (value != 0)
	{
		res = value % 16;
		value = value / 16;
		if (res < 10)
			ret[i] = res + '0';
		else
			ret[i] = res + 87;
		i++;
	}
	ret[i] = '\0';
	return (noDump(ret));
}
