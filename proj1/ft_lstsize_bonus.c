/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:15:27 by codespace         #+#    #+#             */
/*   Updated: 2023/10/29 11:39:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *no1 ;
// 	t_list *no2 ;
// 	t_list *no3 ;
// 	no1 =ft_lstnew("EU");
// 	no2 =ft_lstnew("TU");
// 	no3 =ft_lstnew("ELE");
// 	//ft_lstadd_back(&no1,no2);
// 	//ft_lstadd_back(&no1,no3);
// 	printf("O tamanho da lista e %i",ft_lstsize(no2));
// }