/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:43:21 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:01:10 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int main(void)
{
    t_list *node1 = ft_lstnew((void *)42);
    t_list *node2 = ft_lstnew((void *)123);

    printf("Node 1 content: %d\n", (int)(intptr_t)node1->content);
    printf("Node 2 content: %d\n", (int)(intptr_t)node2->content);

    node1->next = node2;

    if (node1->next != NULL)
        printf("Node1 and next: %d\n", (int)(intptr_t)node1->next->content);

    return 0;
}*/