/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elisa <elisa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 18:01:17 by elisa             #+#    #+#             */
/*   Updated: 2020/12/03 14:24:45 by elisa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*str2;
	unsigned int	i;

	i = 0;
	str2 = (char*)s;
	while (str2[i])
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str2[i])
	{
		str[i] = (*f)(i, str2[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
