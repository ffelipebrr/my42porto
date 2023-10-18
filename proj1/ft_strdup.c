/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:12:16 by francgom          #+#    #+#             */
/*   Updated: 2023/10/18 13:28:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*buff;
	int		len;

	len = ft_strlen(s);
	buff = (char *) malloc(len + 1);
	if (!buff)
		return (0);
	ft_memcpy(buff, s, len + 1);
	return (buff);
}

// /*
// strdup: retorna uma copia da string "s"
// restrição: verifica se a memoria foi alocada corretamente no buff
// função externa: ft_memcpy para copiar o conteude de "s" no "buff"
// */

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	char *p1 = "ABCD";
// 	char *dup1;
// 	dup1 = ft_strdup(p1);
// 	printf("Original: %s \n", p1);
// 	printf("Minha copia: %s \n",dup1);
// }