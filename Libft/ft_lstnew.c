#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int	main()
{
	int	valor = 42;
    t_list *node = ft_lstnew(&valor);
    if (node)
    {
		printf("direccion hexa del nodo: %p\n", (void *)node);
        printf("Contenido del nodo: %d\n", *(int *)(node->content));
		free(node);
    }
    else
        printf("Error al crear el nodo\n");
    return 0;
} */