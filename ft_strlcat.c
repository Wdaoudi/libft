/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:51:46 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/28 19:57:57 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	j = 0;
	lendst = 0;
	lensrc = ft_strlen((const char *)src);
	while (lendst < size && dst[lendst] != '\0')
		lendst++;
	if (lendst == size)
		return (size + lensrc);
	i = lendst;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
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

	dstsize = sizeof(dst);
	// Appel à la fonction ft_strlcat
	result = ft_strlcat(dst, src, dstsize);
	// Affichage des résultats
	printf("Destination après strlcat: '%s'\n", dst);
	printf("Longueur totale retournée par ft_strlcat: %zu\n", result);
	
	return (0);
}*/