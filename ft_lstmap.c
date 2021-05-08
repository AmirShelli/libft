#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux_lst;

	aux_lst = lst;
	while (lst)
	{	
		lst->content = f(lst->content);
		lst = lst->next;
	}
	return (aux_lst);
}
