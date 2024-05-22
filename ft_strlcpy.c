/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:54:29 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/21 17:54:09 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  lenght;
    
    i = 0;
    lenght = 0;
    while (src[lenght])
        lenght ++;
    
    if(!(size > 0))
        retun (0);
    while(i < size)
    {
        dst[i] = src[i];
        i ++;
    }
    dst [i] = 0;
    return (lenght);
}