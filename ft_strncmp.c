/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:49:20 by kpaux             #+#    #+#             */
/*   Updated: 2022/04/22 08:35:45 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		while (s1[i] != s2[i])
		{
			if (((unsigned char *) s1)[i] > ((unsigned char *) s2)[i])
				return (1);
			else if (((unsigned char *) s1)[i] < ((unsigned char *) s2)[i])
				return (-1);
		}
		i++;
	}
	return (0);
}