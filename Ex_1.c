#include <stdio.h>

// Print out a multipication table

int main()
{
    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The multipication table is as followed\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

/*

Done

*/