#include "libft.h"

//Compte le nombre d’éléments de la liste.

int ft_lstsize(t_list *lst)
{
	unsigned int	size;
	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}