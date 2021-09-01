#include "ft_printf.h"

int	printf_x(va_list listI, char c)
{
	unsigned int	ch;
	ssize_t			len;
	char			*u;

	ch = va_arg(listI, int);
	u = ft_calcX(ch, c);
	len = ft_putstr_fd(u);
	free(u);
	return (len);
}

int	printf_p(va_list listI)
{
	ssize_t			len;
	char			*u;
	uintptr_t		uin;
	char			*x;

	uin = (uintptr_t)va_arg(listI, void *);
	x = ft_calcXP(uin);
	u = ft_strjoin("0x", x);
	free(x);
	len = ft_putstr_fd(u);
	free(u);
	return (len);
}
