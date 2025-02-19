#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char numbers[] = "0123456789ABCDEF";

void intpart(unsigned int num, int base) {
    if (num >= base)  // Fix: Use >= instead of >
        intpart(num / base, base);  // Recursive call

    printf("%c", numbers[num % base]);
}

void floatpart(double num, int base) {
    int count = 0; // To avoid infinite loops for repeating fractions

    while (num > 0 && count < 10) {  // Limit precision
        num *= base;
        int n = (int)num; // Extract integer part
        printf("%c", numbers[n]); 
        num -= n;  // Remove extracted part
        count++;
    }
}

int main() {
    int base = 16;
    char number[] = "10.12";

    printf("Number %s in base %d: ", number, base);

    // Convert integer part
    int intValue = strtol(number, NULL, 10);  // Safer than atoi()
    intpart(intValue, base);

    // Convert fractional part
    char *decimalPoint = strstr(number, ".");
    if (decimalPoint) {  // Check if there's a decimal part
        printf(".");
        floatpart(atof(decimalPoint), base);
    }

    printf("\n");

    return 0;
}
