/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:00:58 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/23 18:54:27 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;
	cc = (char) c;
	

	i = 0;
	if (s[i] == c)
		return ((char *) &s[i]);
	else
		i++;
	return (NULL);
	
}

int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    
    // Utilisation de ft_strchr pour trouver la première occurrence de 'o' dans str
    char *result = ft_strchr(str, ch);
    
    // Affichage du résultat
    if (result != NULL) {
        printf("The first occurrence of '%c' in \"%s\" is \"%s\"\n", ch, str, result);
    } else {
        printf("Character '%c' not found in \"%s\"\n", ch, str);
    }
    
    return 0;
}