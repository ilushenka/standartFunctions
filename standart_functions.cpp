#include "standart_functions.h"
#include <stdlib.h>
#include <stdio.h>

int stringLength (const char* massive)
{
    int lettersValue = 0;

    while (massive[lettersValue] != '\0')
        lettersValue++;

    return lettersValue;
}

void stringCopy (char* copyTo, const char* copyFrom)
{
    int i = 0;

    do
        copyTo[i] = copyFrom[i];
    while (copyFrom[i++] != '\0');
}

char* stringChar (const char* string, int symbol)
{
    int i = 0;

    while (string[i] != symbol && string[i] != '\0')
        i++;

    if (string[i] == '\0')
        return NULL;
    return const_cast<char*>(string + i);        // const cast ?
}

int stringCompare (const char* s1, const char* s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;

    if (s1[i] > s2[i])
        return 1;
    else
    if (s1[i] < s2[i])
        return -1;

    return 0;
}

char* stringCat (char* s1, const char* s2)
{
    int i = stringLength (s1);

    stringCopy (s1+i, s2);

    return s1;
}
