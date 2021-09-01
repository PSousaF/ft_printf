#include "ft_printf.h"

int	printf_c(va_list listC)
{
	char	ch;

	ch = va_arg(listC, int);
	write(1, &ch, 1);
	return (1);
}

int	printf_s(va_list listS)
{
	char		*ch;
	size_t		i;

	i = 0;
	ch = va_arg(listS, char *);
	if (!ch)
	{
		i = write(1, "(null)", 6);
		return (i);
	}
	while (ch[i])
	{
		write(1, &ch[i], 1);
		i++;
	}
	return (i);
}
