#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*work;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	work = *lst;
	while (work->next != NULL)
		work = work->next;
	work->next = new;
}
