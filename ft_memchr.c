/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:09:50 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 16:52:37 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s || c == (int) n)
		return (NULL);
	while (n--)
	{
		if (*(unsigned char *) s == (unsigned char) c)
			return ((unsigned char *) s);
		s++;
	}
	return (NULL);
}
