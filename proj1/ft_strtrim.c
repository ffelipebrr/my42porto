/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:53:29 by codespace         #+#    #+#             */
/*   Updated: 2023/10/18 16:28:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/*
ft_strtrim: A função remove da string "s" a sequência de caracteres de "set"
enquanto ela for satisfeita. Por exemplo: 
1 - s = "ABCDEAB" e set="AB" deve retornar "CDE"
2 - s = "ABCDEAB2" e set = "AB" deve retornar "CDEAB2"
Restrições: A
*/
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	char *original = argv[1];
// 	char *meuset = argv[2];
// 	char *new;
// 	printf("original:  %s \n", original);	
// 	new = ft_strtrim(original,meuset);
// 	printf("resultado: %s \n",new);
// 	printf("removeu: %s \n", meuset);
// }
