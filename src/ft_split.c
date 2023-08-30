/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madougla <madougla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 23:49:55 by apuchill          #+#    #+#             */
/*   Updated: 2023/08/10 14:37:50 by madougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1);

static int	count_words(const char *str, char c)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 0;
	while (*str)
	{
		if (*str != c && new_word == 0)
		{
			new_word = 1;
			i++;
		}
		else if (*str == c)
			new_word = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			new_wordidx;
	char		**result;

	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	j = 0;
	new_wordidx = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && new_wordidx < 0)
			new_wordidx = i;
		else if ((s[i] == c || i == ft_strlen(s)) && new_wordidx >= 0)
		{
			result[j++] = word_dup(s, new_wordidx, i);
			new_wordidx = -1;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
