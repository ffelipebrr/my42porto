/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:28:57 by codespace         #+#    #+#             */
/*   Updated: 2023/11/11 10:46:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A função strcat (string concatenate) é usada para concatenar uma string "src"
a outra "dest".
*/
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char dest1[10]= "AB";
// 	char dest2[10]= "AB";
// 	char s1[4] = "123";
// 	char s2[4] = "123";
// 	printf("strcat = %s\n", strcat(dest1,s1));
// 	printf("ft_strcat = %s\n", ft_strcat(dest2,s2));
// }