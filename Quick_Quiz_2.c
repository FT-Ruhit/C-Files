#include <stdio.h>
#include <string.h>

int main()
{
    char str[54];
    char str2[54];
    char str3[] = "is the friend of";
    char str4[55];
    printf("Enter your name: ");
    gets(str);
    printf("Enter one of your friend name: ");
    gets(str2);
    strcpy(str4, strcat(str, str3));
    puts(strcat(str4, str2));

    return 0;
}

/*

Done

*/