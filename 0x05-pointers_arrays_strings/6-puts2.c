#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * puts2 - print every other character excepts next one
 * @str: checks for function input
 * Return: returns void
 */

void puts2(char *str)
{
    int i, j;
    char *ptr_str;
    ptr_str = malloc(strlen(str)+1);

    for (i = 0, j = 0; str[i] != '\0'; i++,j = j + 2)
    {
        *(ptr_str + i) = str[i];
    }
    *(ptr_str + i) = '\0';
    for (j = 0; j < strlen(ptr_str); j = j + 2){
        printf("%c",*(ptr_str + j));
    }
    putchar('\n');
    printf("%s", ptr_str);
}
