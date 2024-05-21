/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:30:49 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/21 12:03:38 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;
	size_t i;

	str = s;
	i = 0;
	if (c = 0)
		return (0);
	while (s[i] && i <= n)
	{
		if (s[i] == c)
			return (s[i]);
		else
			i++;
	}
	return (NULL);
}