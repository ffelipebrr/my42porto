/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:02:46 by codespace         #+#    #+#             */
/*   Updated: 2023/10/25 21:12:31 by codespace        ###   ########.fr       */
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
