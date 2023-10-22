/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:19:25 by codespace         #+#    #+#             */
/*   Updated: 2023/10/20 09:59:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	ft_count_word(char const *s, char c)
// {
// 	int	count;
// 	int	i;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			count++;
// 			while (s[i] && s[i] != c)
// 				i++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (count);
// }

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	(void)argv;
// 	char *p = argv[1];
// 	char c = argv[2][0];
// 	printf("numero de palavras: %i",ft_count_word(p,c));
// }