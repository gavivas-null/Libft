/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:19:31 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/10 21:11:10 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s1: La string que debe ser recortada.
//
//set: Los caracteres a eliminar de la string.
//
//elimina todos los caracteres de la string 'set' desde
//el principio y desde el final de 's1' hasta encontrar un caracter
//no perteneciente a 'set'.
//
//la string resultante se devuelve con reserva de malloc.
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*restr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	if (i > j)
		return (ft_strdup(""));
	len = j - i + 1;
	restr = malloc(sizeof(char) * (len + 1));
	if (restr == NULL)
		return (NULL);
	ft_memcpy(restr, s1 + i, len);
	restr[len] = '\0';
	return (restr);
}
//NO PASA PACO -S//
/* int	main(void)
{
	char		*res;
	char const	*s;

	s = "   Hola Mundo!   ";
	res = ft_strtrim(s, "\n\t");
	if (res == NULL)
	{
		printf("Error: ft_strtrim devolvió NULL.\n");
		return (1);
	}
	printf("Cadena original: " % s "\n", s);
	printf("Cadena recortada: " % s "\n", res);
	free(res);
	return (0);
}
 */