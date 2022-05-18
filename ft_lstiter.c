#include "libft.h"

// Itère sur la liste ’lst’ et applique la fonction
// ’f’ au contenu chaque élément.

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}