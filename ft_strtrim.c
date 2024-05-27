/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:49:18 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/27 18:38:46 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(const char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (isset(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (isset(s1[j], set) == 1)
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	return (str);
}
/*int	main(int ac, char **av)
{
	if (ac == 0)
		return (0);
	printf("%s\n", ft_strtrim(av[1],av[2]));
	return (0);
}*/