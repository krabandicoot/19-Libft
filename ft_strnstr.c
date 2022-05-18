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

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	char		*s1_less;

	s1_less = (char *)s1;
	i = 0;
	if (!*s2)
		return (s1_less);
	while (s1_less[i] && i < len)
	{
		j = 0;
		while (s1_less[i + j] == s2[j] && i + j < len)
		{
			if (!s2[j])
				return (s1_less + i);
			j++;
		}
		if (!s2[j])
			return (s1_less + i);
		i++;
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
	printf("%s", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));
	printf("\n%s", strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35));
}*/