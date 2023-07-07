/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egokeri <egokeri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:35:34 by egokeri           #+#    #+#             */
/*   Updated: 2022/10/17 18:36:29 by egokeri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
// belleği ayırır ve bayt değerlerini 0 ile doldurur.
/*
#include<stdio.h>
int	main()
{
	printf("%p", ft_calloc(10, 30));
}*/