/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:38:29 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 16:58:48 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s != '\0')
		{
			f(i, s);
			s++;
			i++;
		}
	}
}

// #include <stdio.h>
// void ft_test(unsigned int i, char *str)
// {
// 	if ((i & 1) == 0)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 				*str = *str - 'a' + 'A';
// 	}
// }

// int main()
// {
// 	char str[] = "I don't fuck with nobody like mean girls in high school";
// 	ft_striteri(str, &ft_test);
// 	printf("%s", str);
// 	return 0;
// }