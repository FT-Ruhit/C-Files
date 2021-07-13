#include <stdio.h>
/*
! question
kms to miles
inches to foot
cms to inches
pound to kgs
inches to meters
*/
int main()
{
    while (1)
    {
        int user_input, value;
        float result;
        printf("Enter [1] for KM to Miles\nEnter [2] for Inch to Foot\nEnter [3] for CM to Inch\nEnter [4] for Pound to KG\nEnter [5] for Inch to Meters\nEnter [0] to Quit\n");
        printf("\nEnter What do you want to convert: ");
        scanf("%d", &user_input);
        // printf("%d", user_input);
        if (user_input == 1)
        {
            printf("\nEnter the value: ");
            scanf("%d", &value);
            // printf("%d", value);
            result = value * 0.621371;
            printf("The result is %f\n", result);
        }
        else if (user_input == 2)
        {
            printf("\nEnter the value: ");
            scanf("%d", &value);
            // printf("%d", value);
            result = value * 0.0833333;
            printf("The result is %f", result);
        }
        else if (user_input == 3)
        {
            printf("\nEnter the value: ");
            scanf("%d", &value);
            // printf("%d", value);
            result = value * 0.393701;
            printf("The result is %f\n", result);
        }
        else if (user_input == 4)
        {
            printf("\nEnter the value: ");
            scanf("%d", &value);
            // printf("%d", value);
            result = value * 0.453592;
            printf("The result is %f\n", result);
        }
        else if (user_input == 5)
        {
            printf("\nEnter the value: ");
            scanf("%d", &value);
            // printf("%d", value);
            result = value * 0.0254;
            printf("The result is %f\n", result);
        }
        else if (user_input == 0)
        {
            printf("Exiting...");
            break;
        }

        else
        {
            printf("Unknown input");
        }
    }

    return 0;
}
/*

    Done

*/