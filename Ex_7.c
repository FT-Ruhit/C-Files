#include <stdio.h>
/*
! Question
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
struct driver
{
    char name[55];
    char dln[55];
    char route[20];
    int kms;
} driver1, driver2, driver3;

int main()
{
    int driNo;
    // Driver 1
    printf("Driver 1 enter\n");
    printf("Enter your Name: ");
    scanf("%s", &driver1.name);
    printf("Enter your Driving License No: ");
    scanf("%s", &driver1.dln);
    printf("Enter your Route: ");
    scanf("%s", &driver1.route);
    printf("Enter how much KMs you drived: ");
    scanf("%d", &driver1.kms);
    // Driver 2
    printf("Driver 2 enter\n");
    printf("Enter your Name: ");
    scanf("%s", &driver2.name);
    printf("Enter your Driving License No: ");
    scanf("%s", &driver2.dln);
    printf("Enter your Route: ");
    scanf("%s", &driver2.route);
    printf("Enter how much KMs you drived: ");
    scanf("%d", &driver2.kms);
    // Driver 3
    printf("Driver 3 enter\n");
    printf("Enter your Name: ");
    scanf("%s", &driver3.name);
    printf("Enter your Driving License No: ");
    scanf("%s", &driver3.dln);
    printf("Enter your Route: ");
    scanf("%s", &driver3.route);
    printf("Enter how much KMs you drived: ");
    scanf("%d", &driver3.kms);
    // Printing
    while (1)
    {
        printf("Which drivers detail do you want: ");
        scanf("%d", &driNo);
        printf("\n\n\n");
        switch (driNo)
        {
        case 1:
            printf("Dirver 1 Infornation\n");
            printf("Name: %s\n", driver1.name);
            printf("Driving License No: %s\n", driver1.dln);
            printf("Route: %s\n", driver1.route);
            printf("Drived: %d\n", driver1.kms);
            break;
        case 2:
            printf("Dirver 1 Infornation\n");
            printf("Name: %s\n", driver2.name);
            printf("Driving License No: %s\n", driver2.dln);
            printf("Route: %s\n", driver2.route);
            printf("Drived: %d\n", driver2.kms);
            break;
        case 3:
            printf("Dirver 1 Infornation\n");
            printf("Name: %s\n", driver3.name);
            printf("Driving License No: %s\n", driver3.dln);
            printf("Route: %s\n", driver3.route);
            printf("Drived: %d\n", driver3.kms);
            break;

        default:
            printf("Unknown input");
            break;
        }
        printf("\n\n\n");
    }
    return 0;
}