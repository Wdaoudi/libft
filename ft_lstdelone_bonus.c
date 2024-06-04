/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:31:56 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/04 15:51:08 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
void del(void *content) {
    free(content);
}

int main() {
    t_list *node = ft_lstnew(malloc(6));
    if (node != NULL) {
        strcpy(node->content, "Hello");
        ft_lstdelone(node, del);
        printf("Node deleted\n");
    } else {
        printf("ft_lstdelone failed\n");
    }
    return 0;
}
// Node deleted