/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:17:20 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:52:44 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t cont, size_t len)
{
	char	*c;

	c = (char *)malloc(cont * len);
	if (!c)
		return (NULL);
	return (ft_memset(c, 0, len * cont));
}
