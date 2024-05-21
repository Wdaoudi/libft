/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:20:27 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/05/21 11:32:56 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t nmemb, size_t size)
{
	int i;

	i = 0;
	void *tab = malloc(sizeof(size) * nmemb);
	if (tab == NULL)
		return (NULL);
	while (tab[i])
	{
		tab[i] = 0;
		i++;
	}
}