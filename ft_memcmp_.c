/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:30:52 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/21 12:23:38 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	size_t i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i <= n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}