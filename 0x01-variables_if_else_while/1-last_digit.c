#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: assign a random number to the variable n.
 * Return: always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    int len;

    len = sizeof(n);
    char str[len];
    printf("%d\n", n);
    sprintf(str, "%d", n);
    int i;

    if (str[len] > '5')
    {
        printf("Last digit of %d is %c and is greater than 5", n, str[len]);
    }
    else if (str[len] == '0')
    {
        printf("Last digit of %d is %c and is 0", n, str[len]);
    }
    else if (str[len] < '6' && str[len] != '0')
    {
        printf("Last digit of %d is %c and is less than 6 and not 0", n, str[len]);
    }
    return (0);
}
