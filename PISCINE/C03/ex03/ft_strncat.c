/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:19:25 by codespace         #+#    #+#             */
/*   Updated: 2023/11/11 10:44:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A função strncat (string concatenate) é usada para concatenar uma string a 
outra , mas ela também permite especificar o número máximo "nb"de caracteres
a serem concatenados.
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb == 0)
		return (dest);
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char dest1[10]= "AB";
// 	char dest2[10]= "AB";
// 	char s1[4] = "123";
// 	char s2[4] = "123";
// 	printf("strcat = %s\n", strncat(dest1,s1,2));
// 	printf("ft_strcat = %s\n", ft_strncat(dest2,s2,2));
// }