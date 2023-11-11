/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:13:19 by codespace         #+#    #+#             */
/*   Updated: 2023/11/11 10:49:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A função strncmp retorna um valor inteiro que indica a dirença entre as duas
strings até um número máximo "n" de caracteres a serem comparados.
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[2]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	char *s1 = argv[1];
// 	char *s2 = argv[2];
// 	printf("strcmp = %i\n", strncmp(s1,s2,2));
// 	printf("ft_strcmp = %i\n", ft_strncmp(s1,s2,2));
// }