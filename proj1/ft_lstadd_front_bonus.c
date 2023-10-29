/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:40:08 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 11:39:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new -> next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*no1;
// 	typedef struct {
// 	int id;
// 	char name[50];
// 	} Student;
// 	Student aluno1 = {112452, "Raimundo Nonato"};
// 	Student aluno2 = {999952, "Maria Bonita"};
// 	no1 = ft_lstnew(&aluno1);
// 	ft_lstadd_front(&no1,ft_lstnew(&aluno2));
// 	printf("     MINHA PILHA\n");
// 	printf("----------------------------------\n");
// 	while (no1 != NULL)
// 	{
// 		printf("ID: %d\n", ((Student *)no1->content)->id);
// 		printf("NOME: %s\n", ((Student *)no1->content)->name);
// 		free(no1);
// 		no1 = no1->next;
// 	}
// }