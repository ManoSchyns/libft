#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dest;

	dest = malloc(sizeof(t_list));
	if (dest == NULL)
		return (NULL);
	dest->next = NULL;
	dest->content = content;
	return (dest);
}
