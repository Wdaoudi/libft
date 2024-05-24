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

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

char	*ft_strdup(const char *s)
{
	size_t i;
	char *dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * i);
	if (!dest)
		return (NULL);

	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*int main()
{
    const char *original = "Hello, world!";
    char *duplicate;

    // Appel à la fonction ft_strdup
    duplicate = ft_strdup(original);

    // Vérification du résultat
    if (duplicate != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
    }
    else
    {
        printf("Failed to duplicate the string.\n");
    }

    // Libération de la mémoire allouée
    free(duplicate);

    return 0;
}*/