/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:01:53 by codespace         #+#    #+#             */
/*   Updated: 2023/10/22 16:19:53 by codespace        ###   ########.fr       */
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
// int	main(void)
// {
// 	char *p = "EU";
// 	t_list mylist = ft_lstnew(p);
// 	printf("%s\n",p);

// 	ft_lstnew(void *data)
// }