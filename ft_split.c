/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:07:26 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/19 22:26:25 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	wc;
	size_t	i;

	wc = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (wc);
}

static char	*ft_make_word(char *src, char c)
{
	char	*dst;
	size_t	i;

	i = 0;
	while (src[i] != c && src[i] != '\0')
		i++;
	dst = ft_calloc((i + 1), sizeof(char)); //initialize the memory block with zero 
	if (!dst)
		return (0);
	ft_memcpy(dst, src, i);
	return (dst);
}

static char	**ft_free(char **str, size_t j)
{
	while (j)
	{
		j--;
		free(str[j]);
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	j;
	size_t	wc;

	if (!s)
		return (NULL);
	j = 0;
	wc = ft_word_count(s, c);
	str = malloc((wc + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s != '\0' && j < wc)
	{
		while (*s == c)
			s++;
		str[j] = ft_make_word(((char *)&*s), c);
		if (!str[j])
			return (ft_free(str, j));
		j++;
		while (*s != c && *s != '\0')
			s++;
	}
	str[j] = 0;
	return (str);
}