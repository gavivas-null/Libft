#include "libft.h"

//lst: el principio de la lista.
//Valor devuelto: La longitud de la lista.
//Funciones autorizadas: Ninguna
//new: nuevo nodo.
//next: puntero al siguiente nodo.
//Descripción: Cuenta el número de nodos de una lista.
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
