/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:13:57 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/09 18:42:01 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	totalsize;

	totalsize = count * size;
	arr = (void *)malloc(totalsize);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size * count);
	return (arr);
}
