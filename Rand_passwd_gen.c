#include <stdio.h>
#include <stdlib.h>
#include <time.h.>
#include <string.h>

char randumpassgen()
{
    srand(time(0));
    char numbers[] = "0123456789";
    char smletters[] = "abcdefghijklmnoqprstuvwyzx";
    char capletters[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char symbols[] = "!@#$%^&*?";
    // Add more if you wnat more complex password
    int num, randomizer, items;
    printf("Enter the how many character you wnat your password to be?\n");
    scanf("%d", &num);
    char password[num];
    // change the value of num according to your arrays
    items = 4;
    randomizer = rand() % num;
    // Loop for creating password
    for (int i = 0; i < num; i++)
    {
        switch (randomizer)
        {
        case 1:
            password[i] = numbers[rand() % strlen(numbers)];
            break;
        case 2:
            password[i] = smletters[rand() % strlen(smletters)];
            break;
        case 3:
            password[i] = capletters[rand() % strlen(capletters)];
            break;
        default:
            password[i] = symbols[rand() % strlen(symbols)];
            break;
        }
        randomizer = rand() % items;
    }
    // printing the password
    puts(password);
}

int main()
{
    randumpassgen();
    return 0;
}