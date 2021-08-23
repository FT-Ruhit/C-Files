#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, nguess = 1, wish;
    do
    {
        srand(time(0));
        num = rand() % 100 + 1;
        do
        {
            // printf("%d\n", num); // for testing
            printf("Guess a value form 1 to 100: ");
            scanf("%d", &guess);
            if (guess < num)
            {
                printf("Higher number please\n");
            }
            else if (guess > num)
            {
                printf("Lower number please\n");
            }
            else if (guess == num)
            {
                printf("You guessed the number in %d attempts\n", nguess);
                break;
            }
            nguess++;
        } while (1);
        printf("Enter 1 for yes\nEnter 0 for no\n");
        printf("Do you want to play this game again: ");
        scanf("%d", &wish);
        if (wish == 1)
        {
            continue;
        }
        else if (wish == 0)
        {
            printf("Thanks for playing this game");
            break;
        }
        else
        {
            printf("Unknown input");
            break;
        }

    } while (1);

    return 0;
}

/*

Ready To Play

*/