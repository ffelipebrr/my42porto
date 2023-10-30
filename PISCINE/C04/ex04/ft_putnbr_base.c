/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:37:38 by codespace         #+#    #+#             */
/*   Updated: 2023/10/30 21:01:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// falta incluir uma função para verificar os possiveis erros da base

void	ft_putnbr_base(int nbr, char *base)
{
	int		b_size;
	long	naux;

	naux = nbr;
	b_size = ft_strlen(base);
	if (naux < 0)
	{
		write(1, "-", 1);
		naux = -naux;
	}
	if (naux >= b_size)
	{
		ft_putnbr_base(naux / b_size, base);
		naux = naux % b_size;
	}
	write(1, &base[naux], 1);
}

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	ft_putnbr_base(-102452,argv[2]);
// 	write(1, "\n",1);
// }