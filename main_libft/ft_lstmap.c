#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*next;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	tmp = new_lst;
	while (lst->next)
	{
		next = (struct s_list *)malloc(sizeof(t_list *));
		if (!next || !new_lst)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		next = ft_lstnew(f(lst->content));
		tmp->next = next;
		tmp = next;
		lst = lst->next;
	}
	return (new_lst);
}
