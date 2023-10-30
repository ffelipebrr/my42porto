/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:02:46 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 11:39:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp_lst;

	if (!f || !lst)
		return ;
	tmp_lst = lst;
	while (tmp_lst)
	{
		f(tmp_lst -> content);
		tmp_lst = tmp_lst -> next;
	}
}

// #include <stdio.h>
// void imprimir(t_list *lst)
// {
// 	 while (lst)
//     {
//         printf("%s\n", lst->content);
//         lst = lst->next;
//     }
// }
// void to_uppercase(void *content)
// {
// 	int	i = 0;
// 	char *str = (char *)content;
// 	while (str[i] != '\0')
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// }
// int main(void)
// {
// 	t_list	*list;
// 	list = ft_lstnew(ft_strdup("asdEFkjkAVXD"));
// 	ft_lstadd_front(&list,ft_lstnew(ft_strdup("asascaww")));
// 	printf("\nnANTES\n");
// 	imprimir(list);
// 	printf("\nnDepois\n");
// 	ft_lstiter(list,to_uppercase);
// 	imprimir(list);
// }