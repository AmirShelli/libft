#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (lst)
	{	
		while (*lst)
		{
			current = (*lst)->next;
			ft_lstdelone(*lst, del);
			free(*lst);
			(*lst) = current;
		}
		*lst = NULL;
	}
}
