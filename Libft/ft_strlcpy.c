/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:40:58 by egokeri           #+#    #+#             */
/*   Updated: 2022/10/18 12:29:54 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	len;

	srclen = ft_strlen(src);
	if (dstsize)
	{
		if (srclen >= dstsize)
			len = dstsize - 1;
		else
			len = srclen;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (srclen);
}
