#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of str
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL if memory was insufficient
 * or if str is NULL
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int i, length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
length++;
dup_str = malloc((length + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);
for (i = 0; i < length; i++)
dup_str[i] = str[i];
dup_str[length] = '\0';

return (dup_str);
}
