#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sqr(int a) { return a * a; }

int quadratic(int *arr, int *x)
{
    // x = [-b ± √(b² - 4ac)] / (2a)
    if ((sqr(arr[1]) - 4 * arr[0] * arr[2]) < 0)
    {
        return 1;
    }
    if (arr[0] == 0)
    {
        x[0] = x[1] = (-arr[2] / arr[1]);
        return 0;
    }
    x[0] = ((-arr[1] + sqrt(sqr(arr[1]) - 4 * arr[0] * arr[2])) / (2 * arr[0]));
    x[1] = ((-arr[1] - sqrt(sqr(arr[1]) - 4 * arr[0] * arr[2])) / (2 * arr[0]));
    free(arr);
    return 0;
}

int main(int argc, char const *argv[])
{
    // int a=1,b=-5,c=6;
    // int arr[5] = {a, b, c};
    int *arr = malloc(sizeof(int) * 3), *x = malloc(sizeof(int) * 2);
    printf("Enter the value in a format of a b c\n");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    // printf("%d %d %d \n", a, b, c);

    if (quadratic(arr, x))
    {
        printf("This can't be solved");
        return 1;
    }

    // arr[3] = (-b + sqrt(sqr(b) -4*a*c))/ (2*a);
    if (x[0] == x[1])
    {
        printf("x = %d", x[0]);
    }
    else
    {
        printf("x = %d, %d", x[0], x[1]);
    }
    free(x);
    return 0;
}
