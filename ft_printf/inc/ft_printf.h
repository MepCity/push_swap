/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaarslan <yaarslan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:19:47 by yaarslan          #+#    #+#             */
/*   Updated: 2025/04/13 16:19:49 by yaarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

char	*ft_strchr(const char *s, int c);

int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_printuns(unsigned int n);
int		ft_printhex(unsigned int n, char f);
int		ft_putptr(unsigned long n, int f);
int		ft_printf(const char *p, ...);

#endif