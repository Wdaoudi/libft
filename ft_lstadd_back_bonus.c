/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:26:55 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/01 18:41:09 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ();
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}