/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:53:18 by egokeri           #+#    #+#             */
/*   Updated: 2022/10/19 14:32:58 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && n-- > 0)
	{
		if (s1[i] != s2[i])
			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
			i++;
	}
	return (0);
}
