#include "ft_printf.h"

int	untlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	int			i;
	char		*str;

	if (n == 0)
	{
		str = (char *)malloc(2);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = untlen(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str [i] = '\0';
	while (i != 0)
	{
		i--;
		str [i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
