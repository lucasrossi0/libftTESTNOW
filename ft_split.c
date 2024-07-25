/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrossi-u <lrossi-u@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:04:57 by lrossi-u          #+#    #+#             */
/*   Updated: 2024/07/25 18:39:22 by lrossi-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	word_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static void	free_all(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return ;
}

static char	*create_word(const char *s, char c)
{
	char	*word;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	allocate_word(const char *s, char c, char **split, int words)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			split[j] = create_word(s + i, c);
			if (!split[j])
				free_all(split);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		length;

	length = word_count(s, c);
	split = (char **) malloc(sizeof(char *) * (length + 1));
	if (!split)
		return (NULL);
	allocate_word(s, c, split, length);
	return (split);
}
