/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:58:57 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/12 14:59:07 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	words_counter(char const *w, char z)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (w[i])
	{
		while (w[i] && w[i] == z)
		{
			i++;
		}
		if (w[i] && w[i] != z)
		{
			j++;
		}
		while (w[i] && w[i] != z)
		{
			i++;
		}
	}
	return (j);
}

int	wordslen(const char *str, char n, int i)
{
	int	j;

	j = 0;
	while (str[i] && str[i] != n)
	{
		i++;
		j++;
	}
	return (j);
}

static void	prefinal(char const *s, char **res, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] && s[i] == c)
		i++;
		if (s[i])
		{
			res[j] = malloc(sizeof(char ) * (wordslen(s, c, i) + 1));
			if (!res[j])
				return ;
			while (s[i] && s[i] != c)
			{
				res[j][k++] = s[i++];
			}
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = (char **)malloc(sizeof(char *) * (words_counter(s, c) + 1));
	if (!res)
		return (0);
	prefinal(s, res, c);
	return (res);
}
