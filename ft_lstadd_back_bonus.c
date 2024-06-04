/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:26:55 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/04 16:13:47 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*last;

	if (!lst || !new)
		return ;
	last = ft_lstlast(*lst);
	if (!lst)
		*lst = new;
}
// int main() {
//     t_list *head = ft_lstnew("First");
//     t_list *new_node = ft_lstnew("Second");
//     ft_lstadd_back(&head, new_node);
//     t_list *last = ft_lstlast(head);
//     if (last != NULL)
//         printf("Last Node: %s\n", (char *)last->content);
//     else
//         printf("ft_lstadd_back or ft_lstlast failed\n");
//     return 0;
// }
//last node : second

