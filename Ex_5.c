#include <stdio.h>

void arr_rev(int arr[])
{
    // swaping the array
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};

    printf("\nBefore swaping the array\n");

    for (int i = 0; i < 7; i++)
    {
        printf("The elemnt in  %d is %d\n", i, arr[i]);
    }

    arr_rev(arr);

    printf("\nAfter swaping the array\n");

    for (int i = 0; i < 7; i++)
    {
        printf("The elemnt in  %d is %d\n", i, arr[i]);
    }

    return 0;
}

// Done