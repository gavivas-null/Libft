/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavivas- <gavivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 21:42:08 by gavivas-          #+#    #+#             */
/*   Updated: 2024/12/07 23:28:38 by gavivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

static int	ft_putchar(int c);
int			ft_putdec(int dec);
static void	ft_putpct(int *pct);
static void	ft_putptr(void *ptr);
static int	ft_putstr(char *str);

#endif