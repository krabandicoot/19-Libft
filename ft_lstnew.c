/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:28:40 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/19 22:28:41 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = 0;
	return (lst);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	str[] = "My twins big like Tia Tamera";

// 	t_list	*my_content;

// 	my_content = ft_lstnew((void *)str);
// 	printf("%s\n", my_content->content);
// }
