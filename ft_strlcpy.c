/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:11:30 by kpaux             #+#    #+#             */
/*   Updated: 2022/04/22 08:37:33 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src)
		return (0);
	if (!dstsize)
		return (ft_strlen(src));
	if ((ft_strlen(src) + 1) < dstsize)
	{
		while (i < (ft_strlen(src) + 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (i < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i - 1] = '\0';
	}
	return (ft_strlen(src));
}