#include "libft.h"

//lst: el principio de la lista.
//Valor devuelto: Último nodo de la lista.
//Funciones autorizadas: Ninguna
//lst: el principio de la lista
//new: nuevo nodo.
//next: puntero al siguiente nodo.
//Descripción: Devuelve el último nodo de la lista.
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
