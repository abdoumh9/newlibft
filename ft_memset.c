/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:28:06 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:28:16 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int j, size_t len )
{
	char	*i;

	i = b;
	while (len)
	{
		*i = (unsigned char)j;
		i++;
		len--;
	}
	return (b);
}
