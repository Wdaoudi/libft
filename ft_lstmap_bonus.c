/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaoudi- <wdaoudi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:12:02 by wdaoudi-          #+#    #+#             */
/*   Updated: 2024/06/04 15:27:38 by wdaoudi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    listt;
    t_list     maillon;
    
    if (!lst || !f || !del)
        return(NULL);
    while(lst)
    {
            maillon = ft_lstnew(lst ->content);
            if (!maillon)
            {
                ft_lstclear(&listt, del);
                return (NULL);
            }
            
    }
    return (*listt);
}