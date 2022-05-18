#include "libft.h"

//Ajoute l’élément ’new’ à la fin de la liste.

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}