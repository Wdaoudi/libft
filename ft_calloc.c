/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:20:27 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/28 21:25:15 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = malloc(sizeof(size) * nmemb);
	if (!tab)
		return (NULL);
	while (tab[i])
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

// int main() {
// 	size_t num_elements = 10;
// 	size_t element_size = sizeof(int);

// 	// Utilisation de la fonction calloc standard
// 	int *std_calloc_buffer = (int *)calloc(num_elements, element_size);
// 	if (std_calloc_buffer == NULL) {
// 		fprintf(stderr,
// 			"Échec de l'allocation mémoire avec la fonction standard calloc\n");
// 		return (1);
// 	}

// 	// Utilisation de votre fonction calloc
// 	int *my_calloc_buffer = (int *)calloc(num_elements, element_size);
// 	if (my_calloc_buffer == NULL) {
// 		fprintf(stderr,
// 			"Échec de l'allocation mémoire avec votre fonction calloc\n");
// 		free(std_calloc_buffer);
// 		return (1);
// 	}

// 	// Affichage des valeurs des buffers
// 	printf("Valeurs du buffer alloué par la fonction standard calloc :\n");
// 	for (size_t i = 0; i < num_elements; i++) {
// 		printf("%d ", std_calloc_buffer[i]);
// 	}
// 	printf("\n");

// 	printf("Valeurs du buffer alloué par votre fonction calloc :\n");
// 	for (size_t i = 0; i < num_elements; i++) {
// 		printf("%d ", my_calloc_buffer[i]);
// 	}
// 	printf("\n");

// 	// Libération de la mémoire allouée
// 	free(std_calloc_buffer);
// 	free(my_calloc_buffer);

// 	return (0);
// }