//
// Created by juba on 07/11/23.
//
#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;
    int list_size;

    i = 0;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    list_size = i;
    return (list_size);
}