/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:46:43 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/06 15:46:48 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	m;

	if ((!dst) && dstsize == 0)
	{
		return (ft_strlen(src));
	}
	l = ft_strlen(dst);
	i = 0;
	m = ft_strlen(src);
	j = l;
	if (dstsize <= l || dstsize == 0)
	{
		return (m + dstsize);
	}
	while (src[i] && i < dstsize - l - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (m + l);
}
