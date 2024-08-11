#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*final;
	void	*fcontent;

	final = 0;
	while (lst)
	{
		fcontent = f(lst->content);
		aux = ft_lstnew(fcontent);
		if (!aux)
		{
			del(fcontent);
			ft_lstclear(&aux, del);
		}
		ft_lstadd_back(&final, aux);
		lst = lst->next;
	}
	return (final);
}
