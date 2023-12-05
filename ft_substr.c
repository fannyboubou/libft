/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faboussa <faboussa@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:13:57 by faboussa          #+#    #+#             */
/*   Updated: 2023/11/22 12:30:22 by faboussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s1, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s1_len;
	char	*new_string;

	s1_len = ft_strlen(s1);
	if (start >= s1_len || s1 == 0 || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len -start;
	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (j < len)
		new_string[j++] = s1[i++];
	new_string[j] = '\0';
	return (new_string);
}