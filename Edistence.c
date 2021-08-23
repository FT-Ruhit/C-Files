#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double Edistance(float x1, float x2, float y1, float y2)
{
    double result, *r = malloc(2 * sizeof(double));
    r[0] = pow((x1 - x2), 2);
    r[1] = pow((y1 - y2), 2);
    result = r[0] + r[1];
    free(r);
    return sqrt(result);
}

double area(double r)
{
    float pi = 3.1416;
    return (pi * (pow(r, 2)));
}

int main()
{
    float x1, x2, y1, y2;
    printf("Enter the valye of x1 and y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the valye of x2 and y2: ");
    scanf("%f %f", &x2, &y2);
    printf("The area of the circle is %.4f", area(Edistance(x1, x2, y1, y2)));
    // printf("\n%d", Edistance(x1, x2, y1, y2));
    return 0;
}