/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tifavre <tifavre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:13:51 by timothy           #+#    #+#             */
/*   Updated: 2024/01/10 12:00:52 by tifavre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
    t_list *list = NULL;

    int *num1 = (int *)malloc(sizeof(int));
    int *num2 = (int *)malloc(sizeof(int));
    int *num3 = (int *)malloc(sizeof(int));

    *num1 = 3;
    *num2 = 7;
    *num3 = 1;

    ft_lstadd_front(&list, (void *)num1);
    ft_lstadd_front(&list, (void *)num2);
    ft_lstadd_front(&list, (void *)num3);

    while (list != NULL)
    {
        printf("%d -> ", (int)(intptr_t)list->content);
        list = list->next;
    }
    printf("NULL\n");

    return (0);
}*/