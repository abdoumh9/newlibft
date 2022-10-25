/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:26:03 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/01 11:26:12 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = dst;
	s = (char *)src;
	i = 0;
	if ((!s && !d))
	{
		return (0);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
