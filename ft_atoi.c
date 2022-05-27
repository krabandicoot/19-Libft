/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 03:07:26 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/27 15:14:49 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_max(unsigned long long result, int sign, int size)
{
	long long	nb;

	if ((result > LLONG_MAX || size >= 19) && sign == -1)
		return (0);
	else if ((result > LLONG_MAX || size >= 19) && sign >= 1)
		return (-1);
	nb = result;
	if (sign == -1)
		nb = -nb;
	return (nb);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	int					del;
	unsigned long long	result;

	i = 0;
	result = 0;
	sign = 1;
	if (!str[i])
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (str[i] == '0')
		i++;
	del = i + 1 ;
	while (str[i] >= 48 && str[i] <= 57)
		result = (result * 10) + (str[i++] - 48);
	return (ft_check_max(result, sign, i - del));
}
