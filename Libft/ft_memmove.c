/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:57:44 by gavivas-          #+#    #+#             */
/*   Updated: 2024/03/03 15:48:13 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (s == NULL && d == NULL && len)
		return (NULL);
	if (s > d)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (d);
}
/* int	main(void)
{
	char s[] = "rem ipssum dolor sit a";
	char d[50] = "CDFG";
	size_t l = 10;

	printf("%s\n", ft_memmove(d, s, l));
	printf("%s", memmove(d, s, l));
	return (0);
} */