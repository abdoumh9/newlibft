/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:32:23 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:32:30 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *to, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!to && len == 0)
		return (0);
	if (find[j] == '\0')
	{
		return ((char *)to);
	}
	while (to[i] != '\0' && i < len)
	{
		j = 0;
		while (to[i + j] == find[j] && find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)to + i);
		i++;
	}
	return (0);
}
