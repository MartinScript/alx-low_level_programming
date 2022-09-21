#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: returns void.
 */
int main(void)
{
    char password[10];
    char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char special[21] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '=', '/', '[', ']', '<', '>', '|', '~'};
    int i, randomizer;
    srand(time(NULL));
    randomizer = rand() % 4;
    for (i = 0; i < 15; i++)
    {
        if (randomizer == 1)
        {
            password[i] = lower[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2)
        {
            password[i] = upper[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3)
        {
            password[i] = num[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else
        {
            password[i] = special[rand() % 21];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
    return (password);
}