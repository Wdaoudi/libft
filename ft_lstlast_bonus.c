/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:24:26 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/04 16:59:33 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    t_list  *tmp;
    
    if (!lst)
        return (NULL);
    tmp = lst;
	while (tmp ->next)
		tmp = tmp->next;
	return (tmp);
}
int main() {
    t_list *head = ft_lstnew("First");
    t_list *second = ft_lstnew("Second");
    ft_lstadd_back(&head, second);
    t_list *last = ft_lstlast(head);
    if (last != NULL)
        printf("Last Node: %s\n", (char *)last->content);
    else
        printf("ft_lstlast failed\n");
    return 0;
}
//last node : second
