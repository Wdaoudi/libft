/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:51:46 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/27 16:20:24 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = 0;
	lensrc = ft_strlen((const char *) src);
	while (lendst < size && dst[lendst] != '\0')
		lendst++;
	if (lendst == size)
		return (size + lensrc);
	i = lendst;
	for (size_t j = 0; src[j] != '\0' && i < size - 1; j++, i++)
	{
		dst[i] = src[j];
	}
	if (i < size)
		dst[i] = '\0';
	return (lendst + lensrc);
}

/*int	main(void)
{
	char		dst[20] = "Hello";
	const char	src[] = " World!";
	size_t		dstsize;
	size_t		result;
	char		dst_std[20] = "Hello";
	size_t		result_std;

	dstsize = sizeof(dst);
	// Appel à la fonction ft_strlcat
	result = ft_strlcat(dst, src, dstsize);
	// Affichage des résultats
	printf("Destination après strlcat: '%s'\n", dst);
	printf("Longueur totale retournée par ft_strlcat: %zu\n", result);
	// Comparaison avec strlcat standard
	result_std = strlcat(dst_std, src, dstsize);
	// Affichage des résultats pour la fonction standard
	printf("Destination après strlcat (standard): '%s'\n", dst_std);
	printf("Longueur totale retournée par strlcat (standard): %zu\n",
		result_std);
	return (0);
}*/