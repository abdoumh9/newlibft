/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:25:39 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:25:42 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	const char		*s1;
	const char		*s2;

	s1 = str1;
	s2 = str2;
	i = 0;
	if (!s1 && !s2 && (!n))
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] -(unsigned char)s2[i]);
		i++;
	}
	return (0);
}
