/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:59:50 by codespace         #+#    #+#             */
/*   Updated: 2023/10/25 15:10:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return (NULL);
	del(lst->content);
	free(lst);
	lst = NULL;
};

/*
GitHub Copilot: Claro! A função `ft_lstdelone` 
é uma função da biblioteca `libft` que exclui o nó atual de 
uma lista encadeada. Ela recebe dois parâmetros: o primeiro é 
um ponteiro para o nó que deve ser excluído e o segundo é um ponteiro 
para uma função que deleta o conteúdo do nó. 
A função `ft_lstdelone` não exclui a lista inteira, apenas o nó 
atual. Se você quiser excluir a lista inteira, você pode usar a 
função `ft_lstclear`.
*/