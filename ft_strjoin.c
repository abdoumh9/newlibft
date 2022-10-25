/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:03:48 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/11 13:03:55 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	one;
	size_t	i;
	size_t	j;
	char	*k;
	int		a;

	if (!s1 || !s2)
		return (NULL);
	one = (ft_strlen(s1) + ft_strlen(s2));
	a = 0;
	i = 0;
	j = 0;
	k = malloc(sizeof (char) * (one + 1));
	if (!k)
		return (NULL);
	while (s1[i])
		k[a++] = s1[i++];
	while (s2[j])
		k[a++] = s2[j++];
	k[a] = '\0';
	return (k);
}
