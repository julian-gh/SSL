#include "String.h"
#include <stdlib.h>

unsigned int getLength(const char *s)
{
    if (s[0] == '\0')
        return 0;
    else
    {
        return 1 + getLength(s + 1);
    }
}

unsigned int isEmpty(const char *s)
{
    return s[0] == '\0';
}

const char *power(const char *string, unsigned int factor)
{
    unsigned int length = getLength(string);

    char *newString = (char *)malloc((length * factor) * sizeof(char));

    for (int i = 0; i < factor; ++i)
    {
        for (int j = 0; j < length; ++j)
        {
            newString[i + j] = string[j];
        }
    }

    newString[length * factor] = '\0';

    return newString;
}

unsigned int areEquals(const char *s1, const char *s2)
{

    while (*s1 != '\0')
    {
        if (*s1 != *s2)
            return 0;
        s1++;
        s2++;
    }
    return 1;
}
