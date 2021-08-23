#include <stdio.h>
#include <string.h>

/*
! question

* cheak the inputed number is a palindrome or not
*/

char chars[50];

int palindromeint(int n)
{
    int remainder, reversed = 0, original = n;
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    if (original == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int palendromechar()
{
    char reversed[strlen(chars)];
    strcpy(reversed, chars);
    strrev(reversed);
    if (strcmp(reversed, chars) == 0)
        return 1;
    else
        return 0;
}
int main()
{
    char choose;
    printf("Enter [c] for charecters and [n] for numbers\nEnter: ");
    scanf("%c", &choose);
    getchar();
    if (choose == 'n')
    {
        printf("Enter the number: ");
        int num;
        scanf("%d", &num);
        if (palindromeint(num))
        {
            printf("This number is palindrome");
        }
        else
        {
            printf("This number is not palindrome");
        }
    }
    else if (choose == 'c')
    {
        printf("Enter the charecters: ");
        scanf("%s", chars);
        if (palendromechar())
        {
            printf("This charecters is palindrome");
        }
        else
        {
            printf("This charecters is not palindrome");
        }
    }
    else
        printf("Invalid input");

    return 0;
}