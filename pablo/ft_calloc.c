/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabo <gabo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:05:04 by gavivas-          #+#    #+#             */
/*   Updated: 2024/08/11 21:53:14 by gabo             ###   ########.fr       */
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