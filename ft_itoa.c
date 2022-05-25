/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:23:19 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/19 22:33:43 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(int n)
{
	unsigned int	digits;

	digits = 0;
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

static void	ft_numsstring(int n, unsigned int digits, char *num_string) //print the number in the string
{
	if (n < 0)
	{
		num_string[0] = '-';
		n *= -1;
	}
	num_string[digits] = '\0';
	digits--;
	while (n > 0)
	{
		num_string[digits] = (n % 10) + '0';
		n = n / 10;
		digits--;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	digits;
	char			*num_string;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	num_string = malloc sizeof(char)) * ((digits + 1);
	if (num_string == NULL)
		return (NULL);
	ft_numsstring(n, digits, num_string);
	return (num_string);
}
