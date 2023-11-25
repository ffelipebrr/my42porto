/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:50:29 by codespace         #+#    #+#             */
/*   Updated: 2023/11/11 11:01:03 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A função strncmp retorna um valor inteiro que indica a dirença entre as duas
strings s1 e s2.
*/

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

// #include <string.h>
// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	char *s1 = argv[1];
// 	char *s2 = argv[2];
// 	printf("strcmp = %i\n", strcmp(s1,s2));
// 	printf("ft_strcmp = %i\n", ft_strcmp(s1,s2));
// }