/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:51:46 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/21 18:24:44 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  lendst;
    size_t  lensrc;
    size_t  i;
    
    lensrc = ft_strlen (src);
    lendst = ft_strlen (dst);
    i = 0;
    
    while(i <size && dst[i])
    {
        dest ++;
        i ++;
    }
    if (i >=  size - 1)
    {
        return (i + lensrc);
    }
    while (src[j])
    {
        if(j < size -i -1)   
        {
            des[j] = src[j];
            
        }
        j ++;
    }
    *dst = 0;
    return (i + j);
}