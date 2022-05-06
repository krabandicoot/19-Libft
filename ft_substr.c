/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:03:22 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 16:44:30 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	str_len;
	char	*str;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		str_len = ft_strlen(s);
	else
		str_len = len;
	i = 0;
	n = -1;
	str = malloc (sizeof (char) * (str_len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (start <= i && n < len)
			str[n++] = s[i];
		i++;
	}
	str[n] = '\0';
	return (str);
}
