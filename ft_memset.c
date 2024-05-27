/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:29:14 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/27 14:54:42 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (ptr);
}

/*int main()
{
	char str[50] = "Hello, world!";

	// Utilisation de ft_memset pour remplir les 6 premiers octets de str avec 'x'
	ft_memset(str, 'o', 6);

	// Affichage du résultat
	printf("Modified string: %s\n", str);

	return (0);
}*/