/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:03:17 by codespace         #+#    #+#             */
/*   Updated: 2023/10/30 23:14:30 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_s(char *arg)
{
	if (arg)
		return (write(1, arg, ft_strlen(arg)));
	return (write(1, "(null)", 6));
}

int	ft_print_c(char arg)
{
	return (write(1, &arg, 1));
}

int	ft_print_i_d(int arg)
{
	return (ft_putnbr_base(arg, DECIMAL));
}

int	ft_print_p(unsigned long arg)
{
	int		size;

	if (arg)
	{
		size = write(1, "0x", 2);
		size += ft_putnbr_base_u(arg, HEX_LOWER);
	}
	else
		size = write(1, "(nil)", 5);
	return (size);
}
