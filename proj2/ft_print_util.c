/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:00:42 by codespace         #+#    #+#             */
/*   Updated: 2023/10/30 23:15:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_checkformat(va_list arg, char c)
{
	if (c == 'c')
		return (ft_print_c(va_arg(arg, int)));
	if (c == 's')
		return (ft_print_s(va_arg(arg, char *)));
	if (c == 'i' || c == 'd')
		return (ft_print_i_d(va_arg(arg, int)));
	if (c == 'p')
		return (ft_print_p(va_arg(arg, unsigned long)));
	if (c == 'u')
		return (ft_putnbr_base(va_arg(arg, unsigned int), DECIMAL));
	if (c == 'x')
		return (ft_putnbr_base(va_arg(arg, unsigned int), HEX_LOWER));
	if (c == 'X')
		return (ft_putnbr_base(va_arg(arg, unsigned int), HEX_UPPER));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_putnbr_base(long nbr, char *base)
{
	int	size;
	int	b_size;

	size = 0;
	b_size = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		size++;
		nbr = -nbr;
	}
	if (nbr >= b_size)
	{
		size += ft_putnbr_base(nbr / b_size, base);
		nbr = nbr % b_size;
	}
	size += write(1, &base[nbr], 1);
	return (size);
}

int	ft_putnbr_base_u(unsigned long nbr, char *base)
{
	int				size;
	unsigned int	b_size;

	size = 0;
	b_size = ft_strlen(base);
	if (nbr >= b_size)
	{
		size += ft_putnbr_base_u(nbr / b_size, base);
		nbr = nbr % b_size;
	}
	size += write(1, &base[nbr], 1);
	return (size);
}

// int	main(void)
// {
// 	char *p = "TESTE";
// 	ft_putstr(p);
// }
/*
// TESTA ft_putnbr_base
// */
// int	main(void)
// {
// 	int n = 100;
// 	ft_putnbr_base(n, DECIMAL);
// }