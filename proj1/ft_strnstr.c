/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francgom <francgom@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:43:49 by francgom          #+#    #+#             */
/*   Updated: 2023/10/14 16:02:17 by francgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	nl;	
// 	nl = ft_strlen(big);	
// 	if (!*little)
// 		return ((char *)big);		
// 	while (*big && len-- >= nl)
// 		if (ft_strncmp(big++, little, nl) == 0)
// 			return ((char *) --big);
// 	return (0);
// }..

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;

	if (!*s2)
		return ((char *)s1);
	s2_len = ft_strlen(s2);
	while (*s1 && n-- >= s2_len)
		if (ft_strncmp(s1++, s2, s2_len) == 0)
			return ((char *)--s1);
	return (NULL);
}
