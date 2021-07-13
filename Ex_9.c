#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
! Question

* Making a rock,  paper and seasure game
*/

int csc = 0, usc = 0;

int c_num()
{
    srand(time(NULL));
    return rand() % 4;
}
int game(int cnum, int unum)
{
    if (cnum == 1 && unum == 1)
    {
        printf("It is a tie\n");
    }
    else if (cnum == 2 && unum == 2)
    {
        printf("It is a tie\n");
    }
    else if (cnum == 3 && unum == 3)
    {
        printf("It is a tie\n");
    }
    else if (cnum == 1 && unum == 3)
    {
        csc++;
        printf("You Won!\n");
    }
    else if (cnum == 2 && unum == 1)
    {
        csc++;
        printf("You Won!\n");
    }
    else if (cnum == 3 && unum == 2)
    {
        csc++;
        printf("You Won!\n");
    }
    else if (cnum == 1 && unum == 2)
    {
        usc++;
        printf("You loose!\n");
    }
    else if (cnum == 2 && unum == 3)
    {
        usc++;
        printf("You loose!\n");
    }
    else if (cnum == 3 && unum == 1)
    {
        usc++;
        printf("You loose!\n");
    }
    return 0;
}

int main()
{
    int cnum, unum, turns;
    char ops[] = {'r', 'p', 'c'};
    printf("How many turns you want to play this game?\n");
    scanf("%d", &turns);
    getchar();
    printf("Let's play Rock, Paper and Seizure\n");
    for (int i = 1; i <= turns; i++)
    {
        cnum = c_num();
        // printf("%d", cnum);
        printf("Enter [1] for Rock, [2] for Paper and [3] for Seizure\nEnter: ");
        scanf("%d", &unum);
        // printf("cnum = %d\nunum = %d\n", cnum, unum);
        game(cnum, unum);
        printf("\n");
    }
    printf("\n\n\n***** The result is *****\n\n");
    if (csc > usc)
    {
        printf("You lose the game.\n\nThe score of computer is %d\nYour score is %d", csc, usc);
    }
    else if (usc > csc)
    {
        printf("You won the game!\n\nThe score of computer is %d\nYour score is %d", csc, usc);
    }
    else if (usc == csc)
    {
        printf("It is a tie.\n\nThe score of computer is %d\nYour score is %d", csc, usc);
    }
    printf("\n\n\n");
    return 0;
}