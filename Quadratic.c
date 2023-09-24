#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int sqr(int a){return a*a;}

void quadratic(int* arr){
    // x = [-b ± √(b² - 4ac)] / (2a)
    arr[3] = ((-arr[1] + sqrt(sqr(arr[1]) - 4*arr[0]*arr[2]))/(2*arr[0]));
    arr[4] = ((-arr[1] - sqrt(sqr(arr[1]) - 4*arr[0]*arr[2]))/(2*arr[0]));
    
}

int main(int argc, char const *argv[])
{
    // int a=1,b=-5,c=6;
    // int arr[5] = {a, b, c};
    int* arr = malloc(sizeof(int)*5);
    printf("Enter the value in a format of a b c\n");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    // printf("%d %d %d \n", a, b, c);

    quadratic(arr);
    // arr[3] = (-b + sqrt(sqr(b) -4*a*c))/ (2*a);
    printf("x = %d, %d", arr[3], arr[4]);
    free(arr);
    return 0;
}
