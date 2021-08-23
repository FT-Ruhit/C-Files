#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help()
{
    printf("command : [file-name] [operation] [number] [number]\n\n");
    printf("Commands\n");
    printf("add             - add two numbers\n");
    printf("subtract       - substract two numbers\n");
    printf("multiply        - multiply two numbers\n");
    printf("devide          - devide two numbers\n");
}

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "add") == 0)
    {
        int num1 = atoi(argv[2]), num2 = atoi(argv[3]);
        printf("The result is %d", num1 + num2);
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        int num1 = atoi(argv[2]), num2 = atoi(argv[3]);
        printf("The result is %d", num1 - num2);
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        int num1 = atoi(argv[2]), num2 = atoi(argv[3]);
        printf("The result is %d", num1 * num2);
    }
    else if (strcmp(argv[1], "devide") == 0)
    {
        int num1 = atoi(argv[2]), num2 = atoi(argv[3]);
        printf("The result is %d", (num1 / num2));
    }
    else if (strcmp(argv[1], "--help") == 0)
    {
        help();
    }
    else
    {
        printf("\033[0;31m");
        printf("Invalid input\n");
        printf("\033[0m");
        help();
        printf("--help          - for help");
    }

    return 0;
}
