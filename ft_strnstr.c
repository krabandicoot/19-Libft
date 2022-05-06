/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:28:07 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 16:46:02 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!needle || !haystack)
		return (NULL);
	if (*needle == 0)
		return ((char *) haystack);
	if (len > 0)
	{
		while (*haystack != '\0')
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
			if (i + ft_strlen(needle) > len)
				return (NULL);
			haystack++;
			i++;
		}
	}
	return (NULL);
}
