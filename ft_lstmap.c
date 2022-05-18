#include "libft.h"

// Itère sur la liste ’lst’ et applique la fonction
// ’f ’au contenu de chaque élément. Crée une nouvelle
// liste résultant des applications successives de
// ’f’. La fonction ’del’ est là pour détruire le
// contenu d’un élément si nécessaire.

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
 	t_list	*newlst;
	t_list	*ptr;
	void	*newcontent;

	if (!f)
		return (0);
	newlst = 0;
	if (!del)
		del = free;
	while (lst)
	{
		newcontent = (*f)(lst->content);
		ptr = ft_lstnew(newcontent);
		if (!ptr)
		{
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, ptr);
		lst = lst->next;
	}
	return (newlst);   
}