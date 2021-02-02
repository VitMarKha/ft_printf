/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:52:45 by fngoc             #+#    #+#             */
/*   Updated: 2021/02/02 13:00:14 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** ft_get_width: берет значение width.
*/

void	ft_get_width(t_parser *p)
{
	p->width = va_arg(p->ap, int);
	if (p->width < 0)
	{
		p->flags = '-';
		p->tap = ' ';
		p->width = p->width * (-1);
	}
}
