#include "libftprintf.h"

/*
** ft_putstr_fd_mod_col: Выводит строку в
** указанный файл дескриптор, col символов.
*/

void	ft_putstr_fd_mod_col(char *s, int fd, t_parser *p, int col)
{
	int len;
	int i;

	if (fd < 0 || s == NULL)
		return ;
	i = 0;
	len = ft_strlen(s);
	while ((i < len) && (col-- != 0))
		ft_putchar_fd(s[i++], fd, p);
}
