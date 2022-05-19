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
	if (*needle == 0)
		return ((char *) haystack);
	if (len > 0)
	{
		while (*haystack != '\0')
		{
			if (ft_strncmp(haystack, needle, ft_strlen(needle)) == 0)
				return ((char *)haystack);
			if (i + ft_strlen(needle) >= len)
				return (NULL);
			haystack++;
			i++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	//printf("%s", ft_strnstr("fake", ((void*)0), 3));
	//printf("\n%s", strnstr("fake", ((void*)0), 3));
	// printf("%s", ft_strnstr("123456789", "9", 8));
	// printf("\n%s", strnstr("123456789", "9", 8));
	// printf("%s", ft_strnstr("aaabcabcd", "aaabc", 5));
	// printf("\n%s", strnstr("aaabcabcd", "aaabc", 5));
	printf("%s", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("\n%s", strnstr("lorem ipsum dolor sit amet", "lorem", 15));
}*/