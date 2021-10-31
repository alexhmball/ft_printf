/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aball <aball@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 20:57:28 by aball             #+#    #+#             */
/*   Updated: 2021/10/28 20:57:31 by aball            ###   ########.ae       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *f, ...);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_uns(unsigned int n);
int		ft_strlen(char *str);
int		put_hex_up(unsigned int n);
int		put_hex(unsigned int n);
int		ft_putaddress(unsigned long long ptr);
#endif
