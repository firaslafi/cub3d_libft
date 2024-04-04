/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flafi <flafi@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:49:19 by nnabaeei          #+#    #+#             */
/*   Updated: 2024/04/03 00:55:21 by flafi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *s, size_t max);

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	const size_t	srclen = ft_strlen(src);
	const size_t	dstlen = ft_strnlen(dst, maxlen);

	if (dstlen == maxlen)
		return (maxlen + srclen);
	if (srclen < maxlen - dstlen)
	{
		ft_memcpy(dst + dstlen, src, srclen + 1);
	}
	else
	{
		ft_memcpy(dst + dstlen, src, maxlen - dstlen -1);
		dst[maxlen - 1] = '\0';
	}
	return (dstlen + srclen);
}

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	i;	

	i = 0;
	while (i < maxlen)
	{
		if (!*s)
			break ;
		i++;
		s++;
	}
	return (i);
}
