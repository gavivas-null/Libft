/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:42:37 by gavivas-          #+#    #+#             */
/*   Updated: 2024/08/11 18:27:36 by gabo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;

	if (s == NULL || start < 0 || len < 0)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
/* #include <stdio.h>
int main() {
    char const *s = "Hola Mundo!";
    unsigned int start = 2;
    size_t len = 5;
    char *substr;

    // Llamada a la función ft_substr
    substr = ft_substr(s, start, len);

    // Verificar si la función devolvió NULL (lo que indicaría un error)
    if (substr == NULL) {
        printf("Error: ft_substr devolvió NULL.\n");
        return 1;
    }

    // Imprimir la subcadena
    printf("Subcadena: %s\n", substr);

    // Liberar la memoria asignada por ft_substr
    free(substr);

    return 0;
} */