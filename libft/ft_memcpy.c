/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyawa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:05:55 by oyawa             #+#    #+#             */
/*   Updated: 2018/08/24 11:05:56 by oyawa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;

	s = (char *)src;
	d = (char *)dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}
