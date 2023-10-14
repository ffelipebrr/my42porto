/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:12:54 by francgom          #+#    #+#             */
/*   Updated: 2023/10/09 16:47:54 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)(s + i));
	while (i-- > 0)
		if (*(s + i) == (unsigned char)c)
			return ((char *)(s + i));
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char *original;
// 	char *p1;
// 	char *p2;
// 	original = "ABCDEQE";
// 	p1 = strrchr(original, 'g');
// 	p2 = ft_strrchr(original, 'g');
// 	printf("Original = %s\n",original);
// 	printf("strrchr = %s\n", p1);
// 	printf("ft_strrchr = %s\n", p2);
// }
