#include "ft_printf.h"

int	ft_getType(char c, va_list list)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = printf_c(list);
	if (c == 's')
		len = printf_s(list);
	if (c == 'i' || c == 'd' || c == 'u')
		len = printf_i(list, c);
	if (c == 'x' || c == 'X')
		len = printf_x(list, c);
	if (c == 'p')
		len = printf_p(list);
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		len++;
	}
	return (len);
}

int	ft_printf(const char *strData, ...)
{
	int		i;
	size_t	len;
	va_list	listStr;

	va_start(listStr, strData);
	i = 0;
	len = 0;
	while (strData[i])
	{
		if (strData[i] != '%')
		{
			ft_putchar_fd(strData[i], 1);
			len++;
		}
		else
		{
			i++;
			len = len + ft_getType(strData[i], listStr);
		}
		i++;
	}
	va_end(listStr);
	return (len);
}
