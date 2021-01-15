/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:42:31 by elisa             #+#    #+#             */
/*   Updated: 2020/12/01 22:12:11 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t len)
{
	unsigned int	i;
	char			*str;

	i = 0;
	c = (char)c;
	str = (char*)d;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
