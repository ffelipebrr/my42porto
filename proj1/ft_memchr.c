/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:04:16 by francgom          #+#    #+#             */
/*   Updated: 2023/10/11 19:40:42 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ps;

	ps = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(ps + i) == (unsigned char) c)
			return ((void *)(ps + i));
		i++;
	}
	return (0);
}
