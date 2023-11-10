
#include <malloc.h>
#include "libft.h"

// s1 = toicoutoicoutoitoi
// set = toi
//Allocates (with malloc(3)) and returns a copy of s1 with the characters specified in set removed from the beginning and the end of the string.
size_t index_end(const char *s1, const char *set)
{
    size_t i;
    i = ft_strlen(s1) - 1;
    while (i > 0)
    {
        if (ft_strchr(set, s1[i]) == NULL)
            return (i);
        i--;
    }
    return (i);
}

size_t index_start(const char *s1, const char *set)
{
    size_t i;
    i = 0;
    while (s1[i] != '\0') // toujours preciser le null ou le '\'0 pour comprndre le type de donnees
    {
        if (ft_strchr(set, s1[i]) == NULL)
            return (i);
        i++;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t s1_strlen;
    size_t start;
    size_t end;
    size_t len;
    char *s1_copy_trimmed;

    s1_strlen = ft_strlen(s1);
    end = index_end(s1, set);
    start = index_start(s1, set);
    len = s1_strlen - end;
    s1_copy_trimmed = ft_substr(s1, start, len);
    printf("start est %zu\n", start);
    printf("end est %zu\n", end);
    printf("len est %zu\n", len);
    printf("s1_strlen est %zu\n", s1_strlen);
    return (s1_copy_trimmed);
}