#include "libft.h"

// Supprime et libère la mémoire de l’élément passé en
// paramètre, et de tous les éléments qui suivent, à
// l’aide de ’del’ et de free(3)
// Enfin, le pointeur initial doit être mis à NULL.

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!del)
		del = free;
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
	*lst = 0;
}