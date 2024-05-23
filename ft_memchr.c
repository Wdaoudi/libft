/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:30:49 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/23 13:53:36 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char	l;
	size_t i;

	l = (unsigned char) c;
	str =(unsigned char *) s;
	i = 0;
	if (l == 0)
		return (0);
	while (i < n)
	{
		if (str[i] == l)
			return ((void *) &str[i]);
		else
			i++;
	}
	return (NULL);
}

/*int main()
{
    const char str[] = "Hello, World!";
    char c = 'W';
    char *result;

    result = (char *)ft_memchr(str, c, sizeof(str));
    if (result != NULL)
        printf("Character '%c' found at position: %ld\n", c, result - str);
    else
        printf("Character '%c' not found\n", c);

    return 0;
}*/