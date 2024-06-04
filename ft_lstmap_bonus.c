/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:12:02 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/04 19:46:13 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *listt;
	t_list *maillon;

	if (!lst || !f || !del)
		return (NULL);
    listt = NULL;
	while (lst)
	{
		maillon = ft_lstnew(f(lst->content));
		if (!maillon)
		{
			ft_lstclear(&listt, del);
			return (NULL);
		}
		ft_lstadd_back(&listt, maillon);
		lst = lst->next;
	}
	return (listt);
}
void *touppper(void *content) {
    char *str = ft_strdup((char *)content);
    for (int i = 0; str[i]; i++)
        str[i] = touppper(str[i]);
    return str;
}

void del(void *content) {
    free(content);
}

int main() {
    t_list *head = ft_lstnew("first");
    t_list *second = ft_lstnew("second");
    ft_lstadd_back(&head, second);

    t_list *new_list = ft_lstmap(head, touppper, del);
    ft_lstiter(new_list, print_content);
    ft_lstclear(&new_list, del); // Clean up new_list to avoid memory leaks
    ft_lstclear(&head, del); // Clean up head to avoid memory leaks
    return 0;
}

//first
//second 