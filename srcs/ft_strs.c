/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:16:09 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/19 13:50:55 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_case_c(va_list argp)
{
	int	i;

	i = va_arg(argp, int);
	ft_putchar_fd(i, 1);
}

void	ft_case_s(va_list argp, int *ptr)
{
	char	*str;

	str = va_arg(argp, char *);
	if (!str)
		str = "(null)";
	ft_putstr_fd(str, 1);
	*ptr += ft_strlen(str);
}
