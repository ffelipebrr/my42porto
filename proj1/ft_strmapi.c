/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:05:37 by codespace         #+#    #+#             */
/*   Updated: 2023/10/19 14:41:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buff;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	buff = (char *)malloc(sizeof(char) * ((ft_strlen(s) + 1)));
	if (!buff)
		return (NULL);
	while (s[i])
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

/*
ft_strmapi: Aplica um função "f" a cada um dos caracteres de uma string "s",
e retorna uma nova string que resulta da aplicação de "f".
Restrição: A string "s" deve existir
// */
// #include <stdio.h>

// char convert_up(unsigned int index, char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 'a' - 'A');
// 	return (c);
// }
// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	char *p = argv[1];
// 	char *new_p;
// 	new_p = ft_strmapi(p,convert_up);
// 	printf("Original:  %s \n",p);
// 	printf("Resultado: %s \n",new_p);
// }