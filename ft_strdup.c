/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:53:09 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/28 21:37:53 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
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

// // int main() {
// //     // Cas de test
// //     const char *test_cases[] = {
// //         "Hello, world!",     // Chaîne normale
// //         "",                  // Chaîne vide
// //         "A",                 // Chaîne d'un caractère
// //         "This is a longer string to test the strdup function.", 
// 	// Chaîne plus longue
// //         "String with special characters!@#$$%^&*()_+",
// 	// Chaîne avec caractères spéciaux
// //         NULL                // Fin des tests
// //     };

// //     for (int i = 0; test_cases[i] != NULL; i++) {
// //         char *duplicate = ft_strdup(test_cases[i]);

// //         if (duplicate) {
// //             printf("Original: \"%s\"\nDuplicate: \"%s\"\n", test_cases[i],
// 	duplicate);
// //             free(duplicate); // Libérer la mémoire allouée
// //         } else {
// //             printf("ft_strdup a retourné NULL pour l'entrée: \"%s\"\n",
// 	test_cases[i]);
// //         }
// //         printf("\n");
// //     }

// //     return (0);
// // }