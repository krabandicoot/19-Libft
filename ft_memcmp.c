/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:06:47 by kpaux             #+#    #+#             */
/*   Updated: 2022/04/22 08:43:47 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*my_s1;
	const unsigned char	*my_s2;
	size_t				i;

	i = 0;
	my_s1 = (const unsigned char *)s1;
	my_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (my_s1[i] != my_s2[i]) 
			return (my_s1[i] - my_s2[i]);
		i++;
	}
	return (0);
}