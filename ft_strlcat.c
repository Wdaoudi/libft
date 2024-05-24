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
    size_t  j;
    
    lensrc = ft_strlen (src);
    lendst = ft_strlen (dst);
    i = 0;
    
    while(i <size && dst[i])
    {
        dst ++;
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
            dst[j] = src[j];
            
        }
        j ++;
    }
    *dst = 0;
    return (i + j);
}

int main()
{
    char dst[20] = "Hello";
    const char src[] = " World!";
    size_t dstsize = sizeof(dst);
    size_t result;

    // Appel à la fonction ft_strlcat
    result = ft_strlcat(dst, src, dstsize);

    // Affichage des résultats
    printf("Destination après strlcat: '%s'\n", dst);
    printf("Longueur totale retournée par ft_strlcat: %zu\n", result);

    // Comparaison avec strlcat standard
    char dst_std[20] = "Hello";
    size_t result_std = strlcat(dst_std, src, dstsize);

    // Affichage des résultats pour la fonction standard
    printf("Destination après strlcat (standard): '%s'\n", dst_std);
    printf("Longueur totale retournée par strlcat (standard): %zu\n", result_std);

    return 0;
}
