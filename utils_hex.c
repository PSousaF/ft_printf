#include "ft_printf.h"

char	*noDump(char *ret)
{
	int		j;
	int		i;
	char	*prt;

	j = 0;
	i = ft_strlen(ret);
	prt = (char *)malloc(i + 1);
	while (i != 0)
	{
		i--;
		prt[j] = ret[i];
		j++;
	}
	prt[j] = '\0';
	free(ret);
	return (prt);
}

int	statusVal(unsigned int value, char c)
{
	int	x;

	x = 87;
	if (!value)
		return (0);
	if (c == 'X')
	{
		x = x - 32;
	}
	return (x);
}

char	*retZero(void)
{
	char	*ret;

	ret = (char *)malloc(2);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

char	*ft_calcX(unsigned int value, char c)
{
	int		res;
	int		i;
	char	*ret;
	int		val;

	res = 0;
	i = 0;
	val = statusVal(value, c);
	if (!value)
		return (retZero());
	ret = (char *)malloc(42);
	while (value != 0)
	{
		res = value % 16;
		value = value / 16;
		if (res < 10)
			ret[i] = res + '0';
		else
			ret[i] = res + val;
		i++;
	}
	ret[i] = '\0';
	return (noDump(ret));
}
