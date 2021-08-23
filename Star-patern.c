#include <stdio.h>

int main()
{
    int wish;
    printf("Enter'1' for normal star pattern\nEnter '2' for revurse star pattern\n");
    printf("What do you want: ");
    scanf("%d", &wish);

    if (wish == 1)
    {
        int val;
        printf("Enter the value: ");
        scanf("%d", &val);
        for (int i = 1; i <= val; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (wish == 2)
    {
        int i, j, rows;

        printf("Enter number of rows : ");
        scanf("%d", &rows);

        for (i = 1; i <= rows; i++)
        {
            for (j = i; j <= rows; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("Unknown input");
    }

    return 0;
}
/*

Done

*/