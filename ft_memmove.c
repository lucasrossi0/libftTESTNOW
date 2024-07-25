/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:23:38 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/24 17:20:11 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_char = (unsigned char *)dest;
	src_char = (const unsigned char *)src;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			dest_char[i] = src_char[i];
	}
	return (dest);
}
