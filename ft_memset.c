/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:40:04 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/26 10:54:08 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*temp;

	temp = s;
	while (n > 0)
	{
		*temp = c;
		n--;
		temp++;
	}
	return (s);
}
