#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ver, vnum, *nver;
    printf("Enter the number of vereables: ");
    scanf("%d", &vnum);

    ver = (int *)calloc(vnum, sizeof(int));

    // Taking input
    for (int i = 0; i < vnum; i++)
    {
        printf("Enter the value of vereable %d: ", i + 1);
        scanf("%d", &ver[i]);
    }
    // Printing the output
    for (int i = 0; i < vnum; i++)
    {
        printf("The vlaue of verable %d is %d\n", i + 1, ver[i]);
    }

    // new session
    printf("Enter the new number of vereables: ");
    scanf("%d", &vnum);
    // Taking input
    nver = (int *)realloc(ver, vnum * sizeof(int));

    for (int i = 0; i < vnum; i++)
    {
        printf("Enter the value of vereable %d: ", i + 1);
        scanf("%d", &ver[i]);
    }
    // Printing the output
    for (int i = 0; i < vnum; i++)
    {
        printf("The vlaue of verable %d is %d\n", i + 1, ver[i]);
    }
    

    return 0;
}