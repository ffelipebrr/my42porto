/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:33:13 by codespace         #+#    #+#             */
/*   Updated: 2023/10/17 17:23:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	if (! size || len_dst > size)
		return (ft_strlen(src) + size);
	return (len_dst + ft_strlcpy(&dst[len_dst], src, size - len_dst));
}

// #include <stdio.h>
// // int main(int argc, char *argv[])
// {
// 	(void) argc;
// 	char	*p1= argv[1];
// 	char	*p2 = argv[2];
// 	int		n = 2;
// 	printf("destino: %s\n", p1);
// 	printf("origem: %s\n", p2);
// 	printf(" n = %zu\n", ft_strlcat(p1,p2,n));
// 	printf("resultado: %s\n", p1);
// 	return 0;
// }
