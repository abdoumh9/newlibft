/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:42:02 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/14 15:42:04 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*l;

	i = 0;
	if (!s)
	{
		return (0);
	}
	l = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!l)
	{
		return (0);
	}
	while (s[i])
	{
		l[i] = f(i, s[i]);
		i++;
	}
	l[i] = '\0';
	return (l);
}
