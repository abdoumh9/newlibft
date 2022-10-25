/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:09:25 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:09:38 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	i = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (s[i] == '+')
			i++;
	if (!(s[i] >= '0' && s[i] <= '9'))
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}
