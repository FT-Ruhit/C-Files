#include <stdio.h>
#include <stdlib.h>

int main()
{
    int neid1, neid2, neid3;
    char *eid1, *eid2, *eid3;
    printf("For Emploie 1: \n");
    printf("Enter how many charecters do you have in your EID: ");
    scanf("%d", &neid1);
    neid1++;
    // printf("%d\n", neid1);
    eid1 = (char *)malloc(neid1 * sizeof(char));
    printf("Enter your EID: ");
    scanf("%s", eid1);
    // printf("%s", eid1);
    // puts(eid1);

    printf("For Emploie 2: \n");
    printf("Enter how many charecters do you have in your EID: ");
    scanf("%d", &neid2);
    eid2 = (char *)malloc(neid2 * sizeof(char));
    printf("Enter your EID: ");
    scanf("%s", eid2);
    printf("For Emploie 3: \n");
    printf("Enter how many charecters do you have in your EID: ");
    scanf("%d", &neid3);
    eid3 = (char *)malloc(neid3 * sizeof(char));
    printf("Enter your EID: ");
    scanf("%s", eid3);
    char a;
    for (int i = 0; i == 0; i++)
    {
        printf("Printing the data\n");
        printf("The EID of emploie 1 is ");
        puts(eid1);
        printf("The EID of emploie 1 is ");
        puts(eid2);
        printf("The EID of emploie 1 is ");
        puts(eid3);
        getchar();
        printf("Do you want to show this again?\n[y] to yes and [n] to no\nEnter: ");
        scanf("%c", &a);
        if (a == 'y')
        {
            i = 0;
        }
        
        
    }

    return 0;
}