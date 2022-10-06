/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarras <frcarras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 07:47:19 by Fran              #+#    #+#             */
/*   Updated: 2022/10/06 12:31:37 by frcarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf_arg(const char *format, int i, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr(int n);
int		ft_hex_len(unsigned int num);
void	ft_puthex(unsigned int num, const char format);
int		ft_puthex_upper(int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_putunsign(unsigned int n);
int		ft_ptr_len(uintptr_t num);
int		ft_print_ptr(unsigned long long ptr);
int		ft_putpointer(uintptr_t num);
int		ft_printf(const char *format, ...);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned int num);
int		ft_strlen(char *str);
char	*ft_itoa(int n);

#endif
