#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		count;

	count = 0;
	new = lst;
	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	return (count);
}
