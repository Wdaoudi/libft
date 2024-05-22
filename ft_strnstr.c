/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:18:49 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/22 14:26:13 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *aiguille, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(aiguille[j]))
		return (str);
	while (str[i])
	{
		if (str[i] != aiguille[j])
			i++;
		while (str[i] == aiguille[j] && j <= len)
		{
			i++;
			j++;
		}
		j = 0;
	}
	return (str[i - j]);
}