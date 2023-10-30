/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:39:40 by codespace         #+#    #+#             */
/*   Updated: 2023/10/30 20:28:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	naux;
	char	simb;

	naux = nb;
	if (naux < 0)
	{
		write(1, "-", 1);
		naux = -naux;
	}
	if (naux >= 10)
	{
		ft_putnbr(naux / 10);
		naux = naux % 10;
	}
	simb = (int)naux + '0';
	write(1, &simb, 1);
}

// int	main(void)
// {
// 	int	i = -10;
// 	ft_putnbr(i);
// 	write(1,"\n",1);
// }
