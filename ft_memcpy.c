/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:57:54 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/24 17:19:05 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	const char	*src_char;
	char		*dst_char;
	size_t		i;

	if (!dst && !src)
		return (0);
	i = 0;
	dst_char = (char *) dst;
	src_char = (const char *) src;
	while (i < len)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}
