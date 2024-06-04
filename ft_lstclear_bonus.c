/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:11:20 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/04 19:40:05 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*lstt;

	while (*lst)
	{
		lstt = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lstt;
	}
	free(*lst);
	*lst = NULL;
}
// void del(void *content) {
//     free(content);
// }

// int main() {
//     t_list *head = ft_lstnew(malloc(7));
//     strcpy(head->content, "First");
//     t_list *second = ft_lstnew(malloc(7));
//     strcpy(second->content, "Second");
//     ft_lstadd_back(&head, second);

//     ft_lstclear(&head, del);
//     if (head == NULL)
//         printf("List cleared\n");
//     else
//         printf("ft_lstclear failed\n");
//     return 0;
// }

//list cleared