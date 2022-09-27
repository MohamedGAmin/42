/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamin <mamin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:19:01 by mamin             #+#    #+#             */
/*   Updated: 2022/09/27 19:56:12 by mamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t i;
	unsigned char temp[n];

	i = 0;

	if (!str1 && !str2)
		return (0);
	while (i < n)
	{
		temp[i] = ((unsigned char *)str2)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)str1)[i] = temp[i];
		i++;
	}
	return (str1);
}