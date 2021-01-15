/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 15:45:21 by elisa             #+#    #+#             */
/*   Updated: 2020/12/03 00:20:29 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * (size * count))))
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
