#include "libft.h"

//lst: el puntero al primer nodo de una lista.
//new: el puntero a un nodo que añadir a la lista.
//Valor devuelto: Nada
//Funciones autorizadas: Ninguna
//Descripción: Añade el nodo ’new’ al final de la lista ’lst’.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
}
