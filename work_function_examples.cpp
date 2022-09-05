#include <stdio.h>
#include "work_function_examples.h"
#include "standart_functions.h"

void instructionAndExampleForStringLength ()
{
    printf ("1. Function strlen():\n");
    printf ("\tThis function count letters in one line.\n");

    char massive[] = "Hello,World!";

    printf ("\tLine:%s;\n", massive);
    printf  ("\tletters number:%d\n\n", stringLength (massive));

}

void instructionAndExampleForStringCopy ()
{
    printf ("2. Function strcpy():\n");
    printf ("\tThis function copies a string from one array(copyFrom) to another(copyTo).\n");

    char copyTo[] = "aaa";
    char copyFrom[] = "Abcdefgh";
    printf ("\tFirst massive before copying(copyTo):%s \n", copyTo);
    printf ("\tSecond massive before copying(copyFrom):%s\n", copyFrom);

    stringCopy (copyTo, copyFrom);

    printf ("\tFirst massive after copying(copyTo):%s \n", copyTo);
    printf ("\tSecond massive after copying(copyFrom):%s\n\n", copyFrom);
}

void instructionAndExampleForStringChar ()
{
    printf ("3. Function strchr():\n");
    printf ("\tThis function takes a string and a character, then searches for that character in the string\n");
    printf ("\tand returns a pointer to the first cell with that character.\n");
    printf ("\tIf it does not exist, it returns NULL.\n");

    const char* string = "abcdefghijklmnopqrstuvwxyz";
    int j = 'j', q = 'q', w = '4';
    printf ("\tString:\"%s\";\n", string);
    printf ("\tSymbols:'%c', '%c', '%c';\n", j, q, w);
    printf ("\tString with symbol one: \"%s\";\n", stringChar (string, j));
    printf ("\tString with symbol two: \"%s\";\n", stringChar (string, q));
    printf ("\tString with symbol three: \"%s\".\n\n", stringChar (string, w));
}

void instructionAndExampleForStringCompare ()
{
    printf ("4. Function strcmp():\n");
    printf ("\tThis function compares strings and, if they are the same, returns 0,\n");
    printf ("\tif they are different and the value of the first different character\n");
    printf ("\tis greater than the value of the second, it returns 1, and if the opposite is true, it returns -1.\n");

    char s1[] = "abcdefgh", s2[] = "abcdefgh", s3[] = "abcdefhh", s4[] = "abcdeffh";

    printf ("\tThe string to which the others are compared: \"%s\"\n", s1);
    printf ("\tLines that will be compared to the first:\n");
    printf ("\t\"%s\"; \"%s\"; \"%s\".\n", s2, s3, s4);

    printf ("\tResults: %d; %d; %d.\n\n", stringCompare (s1, s2), stringCompare (s1, s3), stringCompare (s1, s4));
}

void instructionAndExampleForStringCat ()
{
    printf ("5. Function strcat():\n");
    printf ("\tThis function copies one line to the end of another.\n");
    printf ("\tThe first character of the copied string is copied over the null character of the other string.\n");
    printf ("\tThe return value is the string where the copying took place.\n");

    char s1[] = "Hello,", s2[] = "World!";

    printf ("\tString one: \"%s\"\n", s1);
    printf ("\tString two: \"%s\"\n", s2);

    printf ("\tString one(edited): \"%s\"\n\n", stringCat (s1, s2));
}
