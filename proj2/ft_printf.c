/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:10:22 by codespace         #+#    #+#             */
/*   Updated: 2023/10/30 22:23:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	lspa;
	int		i;
	int		size;

	i = 0;
	size = 0;
	va_start(lspa, format);
	while (format[i])
	{
		if (format[i] == '%' && ++i)
			size += ft_checkformat(lspa, format[i]);
		else
		{
			write(1, &format[i], 1);
			size++;
		}
		i++;
	}
	va_end(lspa);
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("\n %i \n",ft_printf(" %% %i %d %u", -10, 800, 9000));
// 	printf("\n %i \n",printf(" %% %i %d %u", -10, 800, 9000));
// }
