/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:53:54 by codespace         #+#    #+#             */
/*   Updated: 2023/10/25 10:52:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_nchar(int n)
{
	unsigned int	nb;
	int				i;

	i = 1;
	nb = n;
	if (n < 0)
	{
		i++;
		nb = -n;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nb;
	int				size;

	size = get_nchar(n);
	s = (char *)malloc(size + 1);
	if (!s)
		return (NULL);
	s[size] = '\0';
	nb = n;
	if (n < 0)
	{
		s[0] = '-';
		nb = -n;
	}
	while (size-- > 0 && s[size] != '-')
	{
		s[size] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (s);
}

// /*
// Testa o contador de caracteres
// */
// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -1;
// 	printf("Numero: %i\n", n);
// 	printf("Quantidade de caracteres: %i\n", get_nchar(n));	
// }
/*
Testa itoa
// */
// #include <stdio.h>
// int	main(void)
// {
// 	int n;
// 	n = -10;
// 	printf("Numero: %i\n", n);
// 	printf("Quantidade de caracteres: %s\n", ft_itoa(n));	
// }