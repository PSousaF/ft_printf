#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	size_t	i;
	size_t	j;

	c = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!c)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		c[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		c[j++] = s2[i];
		i++;
	}
	c[j] = 0;
	return (c);
}

int	ft_putstr_fd(char *s)
{
	ssize_t	i;

	i = 0;
	while (*s)
	{
		write(1, s, 1);
		s++;
		i++;
	}
	return (i);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
