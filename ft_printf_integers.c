#include "ft_printf.h"

int	printf_i(va_list listI, char c)
{
	int				ch;
	unsigned int	uch;
	char			*u;
	int				len;

	if (c == 'u')
	{
		uch = va_arg(listI, int);
		u = ft_utoa(uch);
	}
	else
	{
		ch = va_arg(listI, int);
		u = ft_itoa(ch);
	}
	len = ft_putstr_fd(u);
	free(u);
	return (len);
}
