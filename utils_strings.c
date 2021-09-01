#include "ft_printf.h"

int	intlen(int n)
{
	int		i;

	i = 0;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	int			j;
	long int	ln;
	char		*str;

	ln = n;
	j = n < 0;
	if (j > 0)
		ln = ln * -1;
	i = intlen(n) + 1;
	str = (char *)malloc(i + j + 1);
	if (!str)
		return (NULL);
	str [i + j] = '\0';
	while (i != 0)
	{
		i--;
		str [i + j] = ln % 10 + '0';
		ln = ln / 10;
	}
	if (j > 0)
		str [0] = '-';
	return (str);
}
