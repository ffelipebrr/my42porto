/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:42:40 by codespace         #+#    #+#             */
/*   Updated: 2023/10/26 11:34:34 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buff;
	char	*nsrc;

	buff = (char *) dest;
	nsrc = (char *) src;
	if (dest == src)
		return (dest);
	if (nsrc < buff)
	{
		while (n--)
			*(buff + n) = *(nsrc + n);
		return (dest);
	}
	while (n--)
		*buff++ = *nsrc++;
	return (dest);
}
