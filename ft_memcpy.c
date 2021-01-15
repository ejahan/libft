/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 17:29:51 by elisa             #+#    #+#             */
/*   Updated: 2020/12/04 17:42:04 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*s1;
	char			*s2;

	s2 = (char*)dst;
	s1 = (char*)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
