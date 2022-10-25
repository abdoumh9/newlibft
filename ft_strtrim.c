/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:04:34 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/11 16:04:37 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	cuter_count(int j, char const *cut)
{
	int	i;

	i = 0;
	while (cut[i])
	{
		if (j == cut[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	in;
	size_t	out;
	size_t	i;
	char	*l;

	in = 0;
	i = 0;
	if (!s)
		return (0);
	out = ft_strlen(s);
	while (cuter_count(s[in], set) && s[in])
		in++;
	if (in == out)
		return (ft_strdup(""));
	while (cuter_count(s[out - 1], set) && in < out)
		out--;
	l = malloc(sizeof(char) * out - in + 1);
	if (!l)
		return (0);
	while (out > in)
	l[i++] = s[in++];
l[i] = '\0';
	return (l);
}
