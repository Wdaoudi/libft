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

size_t  strlcat(char *dst, const char *src, size_t size)
{
    size_t  lendst;
    size_t  lensrc;
    size_t  i;
    
    lensrc = ft_strlen (src);
    lendst = ft_strlen (dst);
    i = 0;
    
    while(i <size && dest[i])
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
    *dest = 0;
    return (i + j);
}