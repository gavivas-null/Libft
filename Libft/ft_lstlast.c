#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new;

	new = lst;
	while (new != NULL && new->next != NULL)
	{
		new = new->next;
	}
	return (new);
}
