/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:15:24 by codespace         #+#    #+#             */
/*   Updated: 2023/10/18 14:50:43 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	len_s;
	size_t	i;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	if (start > len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	new_s = (char *)malloc(len + 1);
	if (!new_s)
		return (NULL);
	while (i < len && s[start + i])
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// /*
// ft_substr: retorna uma substring com base na string "s", defini-se a
// posição onde a string irá começar "start" e o tamanho que a substring 
// irá ter levando em consideração o caracter '\0'.
// Restrições: 
// 1 - A string "s" deve existir ; 
// 2 - o inicio da substring "start" não pode ser após o fim de "s", se isso
// acontecer retorne uma string vazia.
// 3 - o tamanho da substring deve ser igual a diferença entre o tamanho de
// "s" e o "start", não esqueça de incluir um espaço a mais para o '\0' no 
// momento de alocar a memoria.
// */
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	char *p1 = argv[1];
// 	char *np1;
// 	(void) argc;
// 	np1 = ft_substr(p1,3,4);
// 	printf("substring: %s\n",np1);
// }