// #include "aux.h"

// char *dup_line(char *s)
// {
//     char *str;
//     int i;

//     str = malloc((line_len(s) + 1));
//     if (!str)
//         return (NULL);

//     i = 0;
//     while (s[i] != '\0')
//     {
//         str[i] = s[i];
//         i++;
//     }
//     str[i] = '\0';
//     return (str);
// }
#include "aux.h"

char *dup_line(char *s)
{
    char *str;
    int i;
    int len;

    if (!s)
        return (NULL);
    len = 0;
    while (s[len] != '\0')  // Asegura que obtienes la longitud real
        len++;

    str = malloc(len + 1);
    if (!str)
        return (NULL);

    i = 0;
    while (i < len)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
