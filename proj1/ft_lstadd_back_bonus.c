/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:01:53 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 11:40:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst && new)
	{
		if (*lst)
		{
			tmp = ft_lstlast(*lst);
			tmp -> next = new;
		}
		else
			*lst = new;
	}
}

// #include <stdio.h>
// void imprimir(t_list *lst)
// {
// 	if (lst != NULL)
// 	{
// 		printf("lst.content: %c\n", *(char *)lst->content);
// 		imprimir(lst->next);
// 	}	
// }
// int	main(void)
// {
// 	t_list	*no1;
// 	t_list	*no2;
// 	char	num;
// 	num = 65;
// 	no1 = ft_lstnew("EU");
// 	no2 = ft_lstnew(&num);
// 	printf("\n%p\n", &num);
// 	ft_lstadd_back(&no1,no2);
// 	ft_lstadd_back(&no1,ft_lstnew("PAPAI"));
// 	printf("     MINHA FILA\n");
// 	printf("----------------------------------\n");
// 	imprimir(no1); // Cabeça da lista
// 	free(no1);
// }