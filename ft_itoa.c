/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 08:23:19 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/06 17:21:53 by kpaux            ###   ########.fr       */
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

static void	put_nums_into_string(int n, unsigned int digits, char *num_string)
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
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	num_string = malloc((digits + 1) * sizeof(char));
	if (num_string == NULL)
		return (NULL);
	put_nums_into_string(n, digits, num_string);
	return (num_string);
}