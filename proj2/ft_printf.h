/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:12:12 by codespace         #+#    #+#             */
/*   Updated: 2023/10/30 22:23:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define DECIMAL   "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

// principal
int		ft_printf(const char *format, ...);
// utilitarios "ft_print_util.c"
int		ft_strlen(char *s);
int		ft_checkformat(va_list arg, char c);
int		ft_putnbr_base(long nbr, char *base);
int		ft_putnbr_base_u(unsigned long nbr, char *base);
// impressoes e com retorno do tamanho "ft_print_tags.c" 
int		ft_print_s(char *arg);
int		ft_print_c(char arg);
int		ft_print_i_d(int arg);
int		ft_print_u(int arg);

#endif