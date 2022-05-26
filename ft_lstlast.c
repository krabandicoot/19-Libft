/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:31:02 by kpaux             #+#    #+#             */
/*   Updated: 2022/05/19 22:31:19 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int		main(void)
// {
// 	char	str[] = "Your pastimes consisted of the strange";

// 	t_list	*str1;
// 	t_list	*str2;
// 	t_list	*str3;

// 	t_list	*lst;

// 	if(!(str1 = malloc(sizeof(t_list))))
// 		return (0);
// 	if(!(str2 = malloc(sizeof(t_list))))
// 		return (0);
// 	if(!(str3 = malloc(sizeof(t_list))))
// 		return (0);

// 	str1->next = str2;
// 	str2->next = str3;
// 	str3->next = NULL;

// 	str3->content = (void *)str;
// 	lst = ft_lstlast(str1);
// 	printf("%s\n", (char *)lst->content);
// }