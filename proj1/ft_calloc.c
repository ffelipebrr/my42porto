/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:16:12 by francgom          #+#    #+#             */
/*   Updated: 2023/10/14 18:12:05 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero (p, nmemb * size);
	return (p);
}

// #include	<stdio.h>
// int	main(void)
// {
// 	int *p1;
// 	int *p2;
// 	int n = 10;
// 	p1 = (int *)calloc(n,n*sizeof(int));
// 	p2 = (int *)ft_calloc(n,n*sizeof(int));
// 	for (int i=0;i<n;i++)
// 	{
// 		printf("p1[%i]=%i e p1 = %p\n",i,p1[i],&p1[i]);
// 		printf("p2[%i]=%i e p2 = %p\n",i,p2[i],&p2[i]);
// 		printf("-------------------------------------\n");
// 	}
// 	free(p1);
// 	free(p2);
// }