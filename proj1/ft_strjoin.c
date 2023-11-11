/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:58:07 by codespace         #+#    #+#             */
/*   Updated: 2023/11/02 14:26:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*sjoin;
	ssize_t		len_sjoin;

	if (!s1 || !s2)
		return (NULL);
	len_sjoin = ft_strlen(s1) + ft_strlen(s2);
	sjoin = (char *) malloc(len_sjoin + 1);
	if (!sjoin)
		return (NULL);
	ft_strlcpy(sjoin, s1, ft_strlen(s1) + 1);
	ft_strlcat(sjoin, s2, len_sjoin + 1);
	return (sjoin);
}
