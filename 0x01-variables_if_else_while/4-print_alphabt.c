#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
    for (int i = 97; i <= 122; i++)
    {
        if ((i == 101) || (i == 113))
        {
            continue;
        }
        putchar(i);
    }
    putchar('\n');
    return (0);
}
