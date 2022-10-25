/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:36:03 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/09 13:36:09 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*l;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	i = 0;
	if (!s)
		return (0);
	if (start >= slen)
		return (ft_strdup("\0"));
	if (len > slen)
		len = slen - start;
	l = malloc((len + 1) * sizeof(char));
	if (!l)
		return (0);
	while (len > i)
	{
		l[i] = s[start];
		start++;
		i++;
	}
	l[i] = '\0';
	return (l);
}
