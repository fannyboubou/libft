//
// Created by emip on 01/11/23.
//
#include "../includes/libft.h"

int ft_isascii(unsigned char c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}