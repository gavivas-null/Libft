/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:51:29 by gavivas-          #+#    #+#             */
/*   Updated: 2024/08/19 18:55:05 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	totalsize;

	totalsize = count * size;
	if ((SIZE_MAX / size) < count && size != 0)
		return (NULL);
	arr = (void *)malloc(totalsize);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size * count);
	return (arr);
}

/* int main()
{
	size_t count = SIZE_MAX;
	size_t size = 5;

	void *arr = ft_calloc(count, size);
	if (arr == NULL)
		printf("Error\n");
	else
		printf("Bien Chaval.\n");
	if (arr != NULL)
		free(arr);
} */