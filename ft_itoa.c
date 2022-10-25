/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:47:25 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/14 11:47:27 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static int	int_count(long cnt)
{
	int	i;

	i = 0;
	if (cnt == 0)
	{
		return (1);
	}
	if (cnt < 0)
	{
		cnt = cnt * -1;
		i++;
	}
	while (cnt > 0)
	{
		cnt = cnt / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		j;
	long	nmb;
	char	*t;

	nmb = n;
	t = malloc(sizeof(char) * int_count(nmb) + 1);
	if (!t)
		return (0);
	j = int_count(nmb);
	t[j] = '\0';
	if (nmb == 0)
		*t = '0';
	if (nmb < 0)
	{
		nmb = nmb * -1;
		t[0] = '-';
	}
	while (nmb > 0)
	{
		t[j - 1] = nmb % 10 + 48;
		nmb = nmb / 10;
		j--;
	}
	return (t);
}
