/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:30:57 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:31:03 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

		i = 0;
	if (n == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < n - 1)
	{
			dst[i] = src[i];
				i++;
	}
		dst[i] = '\0';
	return (ft_strlen(src));
}
