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

int		ft_printf(const char *f, ...);
size_t  ft_putstr(char *str);
void	ft_putchar(char c);
size_t 	ft_putnbr(int n);
char	*ft_itoa(int nbr);
size_t	ft_putnbr_uns(size_t n);
size_t  ft_strlen(char *str);

#endif
