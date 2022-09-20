#include <stdio.h>
#include "main.h"

void _puts(char *str);

int main()
{
    char s[10] = "My School";

    printf("%s\n",s);
    rev_string(s);
    printf("%s\n",s);
    return 0;
}
