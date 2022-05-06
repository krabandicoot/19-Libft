/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:11:54 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 16:44:54 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;	

	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	while (len_s > 0 && s[len_s] != (char)c)
		len_s--;
	if (s[len_s] == (char)c)
		return ((char *)s + len_s);
	return (NULL);
}
