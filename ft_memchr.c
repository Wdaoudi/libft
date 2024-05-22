/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:30:49 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/22 17:14:42 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	size_t i;

	str = s;
	i = 0;
	if (c == 0)
		return (0);
	while ((i <= n) && str[i])
	{
		if (str[i] == c)
			return (str);
		else
			i++;
	}
	return (NULL);
}

int main (int ac, char **av)
{
	if (ac != 3)
		return (NULL);
	printf("%p", ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
	return 0;
}