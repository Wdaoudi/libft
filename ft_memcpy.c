/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:30:58 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/20 12:38:42 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *ptr2;
    const unsigned char   *ptr1;
    size_t i;
    
    ptr2 = (unsigned char *)dest;
    ptr1 = (unsigned char *)src;
    i = 0;
    if (ptr2[i] == 0 || ptr1[i] == 0)
        return (NULL);
    while (i <= n && ptr1)
    {
        ptr2[i] = ptr1[i];
        i ++;
    }
}