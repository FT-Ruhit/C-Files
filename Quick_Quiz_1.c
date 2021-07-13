#include <stdio.h>

void swaper(int *a, int *b)
{
    int add, subs;
    add = *a + *b;
    subs = *a - *b;
    *a = add;
    *b = subs;
}
int main()
{
    int a = 65, b = 23;
    printf("The valude of a is %d and b is %d\n", a, b);
    swaper(&a, &b);
    printf("The valude of a is %d and b is %d (Now)\n", a, b);

    return 0;
}

/*

Done

*/