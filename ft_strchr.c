/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:50:39 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/26 19:45:24 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	temp;

	temp = (unsigned char) c;
	while (*s)
	{
		if ((unsigned char) *s == temp)
			return ((char *)s);
		s++;
	}
	if (temp == '\0')
		return ((char *) s);
	return (NULL);
}
