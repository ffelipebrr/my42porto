/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:16:12 by francgom          #+#    #+#             */
/*   Updated: 2023/11/11 10:16:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	size = nmemb * size;
	p = malloc(size);
	if (!p)
		return (NULL);
	while (size)
		((char *)p)[--size] = '\0';
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