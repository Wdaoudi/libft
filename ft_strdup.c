/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:53:09 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/20 18:07:01 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strdup(const char *s)
{
    int i;
    char    *dest;
    
    while (s[i])
        i ++;
    *dest = malloc(sizeof(char) * i);
    if (dest == 0)
        return (NULL);
    
    i = 0;
    while(s[i])
    {
        dest[i] = s[i];
        i ++;    
    }
    dest[i] = 0;
    return(dest);
}