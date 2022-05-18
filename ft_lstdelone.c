#include "libft.h"

// Libère la mémoire de l’élément passé en argument en
// utilisant la fonction ’del’ puis avec free(3). La
// mémoire de ’next’ ne doit pas être free.

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}