#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_getType(char c, va_list list);
int		ft_printf(const char *strData, ...);
int		printf_hex(va_list listI, char c);
int		printf_integer(va_list listI, char c);
int		printf_strings(va_list listS);
int		statusVal(unsigned int value, char c);
int		ft_putstr_fd(char *s);
int		untlen(unsigned int n);
int		ft_getType(char c, va_list list);
int		ft_printf(const char *strData, ...);
int		printf_x(va_list listI, char c);
int		printf_i(va_list listI, char c);
int		printf_s(va_list listS);
int		printf_c(va_list listC);
int		printf_s(va_list listS);
int		printf_p(va_list listI);
int		statusVal(unsigned int value, char c);
int		ft_putstr_fd(char *s);
int		untlen(unsigned int n);
int		ft_strlenP(uintptr_t n);
char	*noDump(char *ret);
char	*ft_calcX(unsigned int value, char c);
char	*ft_calcXP(uintptr_t value);
char	*retZero(void);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *str);

#endif
