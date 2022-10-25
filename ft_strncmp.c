/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:31:52 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:31:54 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char )str1[i] - (unsigned char )str2[i]);
		}
		i++;
	}
	return (0);
}
