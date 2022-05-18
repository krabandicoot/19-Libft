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
 	char	*str;

 	if (!s)
 		return (NULL);
 	str = malloc(sizeof(char) * len + 1);
 	if (!str)
 		return (NULL);
 	if (ft_strlen(s) < start && len > 0)
 	{
 		str[0] = '\0';
 		return (str);
 	}
 	ft_strlcpy(str, &s[start], len + 1);
 		return (str);
 }
/*
#include <stdio.h>
#include <unistd.h>
 int main()
 {
	 printf("%s", ft_substr("lorem ipsum dolor sit amet", 7, 10));
 }*/