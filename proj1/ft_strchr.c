/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:50:54 by francgom          #+#    #+#             */
/*   Updated: 2023/10/18 13:08:01 by codespace        ###   ########.fr       */
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

// /*
// ft_strchr: Dado um caracter "c" a função retorna um ponteiro para a primeira
// posição de memoria em que o caracter aparece na string "s".
// Restrições: A busca é feita enquanto existir conteúdo na string "s" ou
// " (unsigned char) c  <= '\0'".
// */

// #include <stdio.h>

// int main(void)
// {
// 	char *p1 = "MARIA";
// 	char c1 = 'A';
// 	char *s;
// 	s = ft_strchr(p1,c1);
// 	printf("original: %s \n",p1);
// 	printf("onde foi apontado: %s \n",s);
// }
