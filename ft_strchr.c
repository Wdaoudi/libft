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

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		else
			i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}

/*int main(int ac, char **av)
{
    if (ac != 3)
        return 0;
    printf ("string : %s\n char : %s\n resultat: %s\n", av[1], av[2], ft_strchr(av[1], av[2][0]));
    return 0;
}*/