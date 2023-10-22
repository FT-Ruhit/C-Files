#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    srand(time(NULL));
    char str[] = "Hello, World", res[strlen(str) + 1];
    // printf("%d", strlen(str));
    for (int i = 0; i < strlen(str); i++)
    {
        res[i] = (rand() % 91 + 32);
        res[i + 1] = '\0';
        if (res[i] != str[i])
        {
            i--;
        }
        printf("%s\n", res);
    }

    return 0;
}