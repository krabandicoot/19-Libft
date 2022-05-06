/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:33:14 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 17:00:22 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nlength(char *str, size_t max)
{
	size_t	i;

	i = 0;
	while (str[i] && i < max)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size_dst;
	size_t	size_src;

	size_src = ft_strlen((char *)src);
	size_dst = ft_nlength(dst, dstsize);
	if (size_dst == dstsize)
		return (dstsize + size_src);
	if (size_src < dstsize - size_dst)
		ft_memcpy(dst + size_dst, src, size_src + 1);
	else
	{
		ft_memcpy(dst + size_dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (size_dst + size_src);
}
