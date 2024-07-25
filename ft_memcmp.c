/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:13:14 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/25 15:42:37 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;
	size_t			i;

	if (n <= 0)
		return (0);
	i = 0;
	char_s1 = (unsigned char *) s1;
	char_s2 = (unsigned char *) s2;
	while (i < n)
	{
		if (*char_s1 != *char_s2)
			return (*char_s1 - *char_s2);
		char_s1++;
		char_s2++;
		i++;
	}
	return (0);
}
