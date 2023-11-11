/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:59:30 by francgom          #+#    #+#             */
/*   Updated: 2023/11/02 14:29:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size <= 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	char	*p1= argv[1];
// 	char	*p2 = argv[2];
// 	int		n = 0;
// 	printf("destino: %s\n", p1);
// 	printf("origem: %s\n", p2);
// 	printf(" n = %zu\n", ft_strlcpy(p1,p2,n));
// 	printf("resultado: %s\n", p1);
// 	return 0;
// }