/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:19:25 by codespace         #+#    #+#             */
/*   Updated: 2023/10/25 17:39:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_len_word(char const *s, char c, int index)
{
	int	count;
	int	i;
	int	start;
	int	tam;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tam = i - start;
			if (count == index + 1)
				return (tam);
		}
		else
			i++;
	}
	return (0);
}

char	*ft_get_word(char const *s, char c, int index, char *word)
{
	int	count;
	int	i;
	int	t;

	i = 0;
	t = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			{
				if (count == index + 1)
					word[t++] = s[i];
				i++;
			}
		}
		else
			i++;
	}
	word[t] = '\0';
	return (word);
}

void	ft_free(int i, char **words)
{
	while (i > 0)
		free(words[--i]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;

	words = (char **)malloc((sizeof(char *) * (ft_count_word(s, c) + 1)));
	if (!words)
		return (NULL);
	i = 0;
	while (i < ft_count_word(s, c))
	{
		words[i] = (char *)malloc(ft_len_word(s, c, i) + 1);
		if (!words[i])
		{
			ft_free(i, words);
			return (NULL);
		}
		words[i][0] = '\0';
		words[i] = ft_get_word(s, c, i, words[i]);
		i++;
	}
	words[i] = NULL;
	return (words);
}

/*
TESTA O CONTADOR DE PALAVRAS: ft_count_word
TESTA O VER TAMANHO DE PALAVRAS: ft_len_word
// */
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int i = 0;
// 	(void)argv;
// 	char *p = argv[1];
// 	char c = argv[2][0];
// 	printf("numero de palavras: %i\n",ft_count_word(p,c));
// 	while (i < ft_count_word(p,c))
// 	{
// 		printf("tamanho da 1 palavra: %i\n",ft_len_word(p,c,i));
// 		i++;
// 	}
// }
// /*
// TESTA GET_WORD
// */
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int i = 0;
// 	(void)argv;
// 	char *p = argv[1];
// 	char *pp;
// 	char c = argv[2][0];
// 	printf("numero de palavras: %i\n",ft_count_word(p,c));
// 	while (i < ft_count_word(p,c))
// 	{
// 		pp = (char *)malloc(ft_len_word(p,c,i)+1);
// 		printf("PALAVRA CAPTURADA: %s\n",ft_get_word(p, c, i, pp));
// 		free(pp);
// 		i++;
// 	}
// }
// // /*
// FINALMENTE TESTA A SPLIT
// */
// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	int i = 0;
// 	(void)argv;
// 	char *p = argv[1];
// 	char c = argv[2][0];
// 	char **words;
// 	words = ft_split(p,c);
// 	while (words[i])
// 	{
// 		printf("PALAVRA %i: %s\n",i,words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// }