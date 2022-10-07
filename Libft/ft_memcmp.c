/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamin <mamin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 21:13:07 by mamin             #+#    #+#             */
/*   Updated: 2022/10/07 21:23:51 by mamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i=0;
    while(i<n)
    {
        if ( ((unsigned char *)s2)[i] != ((unsigned char *)s1)[i]) 
            return ( ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return 0;

}