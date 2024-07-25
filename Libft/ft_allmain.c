#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s = "Hola Mi Gente";
	char	c = ' ';
    char    **result;
    int     i;

    i = 0;
    result = ft_split(s, c);
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}