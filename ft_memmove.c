/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:29:53 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/22 10:30:06 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstr;
	char	*srcr;
	int		lenr;

	lenr = len -1;
	dstr = dst;
	srcr = (char *)src;
	if (srcr < dstr)
	{
		while (lenr >= 0)
		{
			dstr[lenr] = srcr[lenr];
				lenr--;
		}
	}
	else
		ft_memcpy(dstr, srcr, len);
	return (dst);
}
