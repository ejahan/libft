/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:24:46 by elisa             #+#    #+#             */
/*   Updated: 2020/12/01 22:05:25 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	long	num;

	num = (n < 0) ? -(long)n : (long)n;
	i = (n < 0) ? 2 : 1;
	sign = (n < 0) ? -1 : 0;
	while (num /= 10)
		i++;
	if (!(str = malloc(sizeof(*str) * i)))
		return (0);
	str[i] = '\0';
	num = (n < 0) ? -(long)n : (long)n;
	while (i-- + sign)
	{
		str[i] = num % 10 + 48;
		num = num / 10;
	}
	sign == -1 ? str[0] = '-' : 0;
	return (str);
}
