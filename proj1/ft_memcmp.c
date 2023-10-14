/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:51:38 by francgom          #+#    #+#             */
/*   Updated: 2023/10/11 19:42:19 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
// 	char	*p1 = "\xff\xaa\xde\x12WXYZ";
// 	char	*p2 = "\xff\xaa\xde\x12MACOSX";
// 	(void)argc;
// 	printf(" %i \n", memcmp(p1, p2, 8));
// 	printf(" %i \n", ft_memcmp(p1, p2, 8));
// }
