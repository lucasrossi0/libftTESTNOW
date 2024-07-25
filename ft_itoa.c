/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:27:27 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/24 17:18:01 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count(int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n <= 0)
	{
		n *= -1;
		c++;
	}
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		counter;
	int		n_mod;

	n_mod = n;
	counter = count(n);
	res = (char *) malloc(sizeof(char) * (counter + 1));
	if (!res)
		return (NULL);
	res[counter--] = '\0';
	if (n_mod == 0)
		res[0] = '0';
	if (n_mod < 0)
	{
		res[0] = '-';
		n_mod = -n_mod;
	}
	while (n_mod)
	{
		res[counter] = ((n_mod % 10) + '0');
		n_mod /= 10;
		counter--;
	}
	return (res);
}
