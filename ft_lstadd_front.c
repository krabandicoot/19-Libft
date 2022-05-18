#include "libft.h"

//Ajoute l’élément ’new’ au début de la liste.

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}