#include "libft.h"

//Renvoie le dernier élément de la liste.

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}