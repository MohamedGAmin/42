/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamin <mamin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:20:34 by mamin             #+#    #+#             */
/*   Updated: 2022/09/27 20:45:45 by mamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{

}




#include<stdio.h>
#include<string.h>
int main(void)
{
    char x[]="Hello";
    char y[50]="END";
    printf("%lu,%s\n",strlcat(y,x,5),y);
}