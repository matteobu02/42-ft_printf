/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbucci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:56:32 by mbucci            #+#    #+#             */
/*   Updated: 2021/09/18 16:23:38 by mbucci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_case_c(va_list argp);
void	ft_case_s(va_list argp, int *ptr);
void	ft_case_p(va_list argp, int *ptr);
void	ft_case_di(va_list argp, int *ptr);
void	ft_case_u(va_list argp, int *ptr);
void	ft_case_x(va_list argp, int c, int *ptr);
int		ft_count_chars(unsigned long n);
void	ft_utohexa(unsigned long n, int *ptr, int ca);

#endif
