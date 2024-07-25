/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:49:47 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/06/26 12:13:35 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	res;
	int	signal;
	int	i;

	res = 0;
	i = 0;
	signal = 1;
	while (nptr[i] == 32 || nptr[i] == 12 || nptr[i] == 10
		|| nptr[i] == 13 || nptr[i] == 9 || nptr[i] == 11)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			signal = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * signal);
}
