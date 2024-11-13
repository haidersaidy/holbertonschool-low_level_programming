#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat_str;
    unsigned int len1, len2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (n >= len2)
        n = len2;

    concat_str = (char *)malloc(len1 + n + 1);
    if (concat_str == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat_str[i] = s1[i];

    for (j = 0; j < n; j++)
        concat_str[i + j] = s2[j];

    concat_str[i + j] = '\0';

    return (concat_str);
}
