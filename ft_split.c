/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:58:36 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/28 19:40:31 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
		{
			n++;
			i++;
		}
		else
			i++;
	}
	return (n);
}
int	lenght_word(char const *s, char c, int i)
{
	int	n;

	n = 0;
	while (s[i + n] != c && s[i + n])
		n++;
	return (n);
}
char	**slip(char const *s, char c, char **str)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		k = 0;
		str[j] = malloc(sizeof(char) * (lenght_word(s, c, i) + 1));
		if (str[j] == NULL)
			return (NULL);
		while (s[i] && s[i] != c)
			str[j][k++] = s[i++];
		str[j][k] = 0;
		while (s[i] == c)
			i++;
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (str == NULL)
		return (str);
	str = slip(s, c, str);
	return (str);
}
// int	main(void)
// {
// 	char	str[] = "    H,e,ll,,,o w,orl,,,,d ,thi,,s, is,, a, t,e,s,t, ,,,";
// 	char	delimiter;
// 	char	**result;
// 	int		i;

// 	delimiter = ',';
// 	// Appel à ft_split
// 	result = ft_split(str, delimiter);
// 	// Vérification et affichage des résultats
// 	if (result)
// 	{
// 		for (i = 0; result[i] != NULL; i++)
// 		{
// 			printf("result[%d]: %s\n", i, result[i]);
// 		}
// 		// Libération de la mémoire allouée par ft_split
// 		for (i = 0; result[i] != NULL; i++)
// 		{
// 			free(result[i]);
// 		}
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("ft_split a retourné NULL\n");
// 	}
// 	return (0);
// }