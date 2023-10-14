/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:50:54 by francgom          #+#    #+#             */
/*   Updated: 2023/10/11 20:33:46 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s || (unsigned char)c <= '\0')
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	palavra[]="ABCDEFGH";
// 	char* p;
// 	p = ft_strchr(palavra,'t'+256);
// 	printf("%s\n",palavra);
// 	printf("%p\n",palavra+2);
// 	printf("%p\n",p);
// }
