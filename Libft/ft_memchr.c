/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamin <mamin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:50:09 by mamin             #+#    #+#             */
/*   Updated: 2022/10/07 21:09:15 by mamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while(i<n)
    {
        if (((unsigned char *)s)[i] == c)
            return  ((void *)(s + i));
        i++;
    }
    return 0;
    
}