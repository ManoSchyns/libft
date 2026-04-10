#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*list;
	t_list	*current;

	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	list = ft_lstnew(f(lst->content));
	if (list == NULL)
		return (NULL);
	lst = lst->next;
	current = list;
	while (lst != NULL)
	{
		current->next = ft_lstnew(f(lst->content));
		if (current->next == NULL)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (list);
}
