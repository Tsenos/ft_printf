/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:48:19 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:00:57 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	(void)content;
}

int main(void)
{
    t_list *node1 = ft_lstnew((void *)42);
    t_list *node2 = ft_lstnew((void *)123);
    t_list *node3 = ft_lstnew((void *)432);

    node1->next = node2;
    node2->next = node3;
	node3->next = NULL;

	ft_lstdelone(node2, del);
    while (node1 != NULL)
    {
        printf("%d -> ", (int)(intptr_t)node1->content);
        node1 = node1->next;
    }
    printf("NULL\n");
    
	return 0;
}*/