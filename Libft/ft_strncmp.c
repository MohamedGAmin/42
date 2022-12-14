/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamin <mamin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:35:10 by mamin              #+#    #+#             */
/*   Updated: 2022/10/06 14:35:11 by mamin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i=0;
    while(i<n)
    {
        if (s1[i]!=s2[i])
            return (s1[i]-s2[i]);
        i++;
    }
    return(0);
}
