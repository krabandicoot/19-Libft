/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:10:08 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/19 22:26:49 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*my_dst;
	unsigned const char	*my_src;

	if (!dst && !src)
		return (NULL);
	my_dst = (unsigned char *)dst;
	my_src = src;
	while (n > 0)
	{
		*my_dst = *my_src;
		my_dst++;
		my_src++;
		--n;
	}
	return (dst);
}
