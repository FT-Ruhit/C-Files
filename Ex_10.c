#include <stdio.h>

/*
! Question

* Making a program that can perform matrix multiplication
*/

int main()
{
    int row, column, mrow, mcolumn, row1, column1, frow, fcolum, sum = 0;
    printf("This program does matrix multipication\n\n");
    printf("Enter the number of rows in your first matrix: ");
    scanf("%d", &row);
    row--;
    printf("Enter the number of columns in your first matrix: ");
    scanf("%d", &column);
    column--;
    printf("Enter the number of rows in your secound matrix: ");
    scanf("%d", &row1);
    row1--;
    printf("Enter the number of columns in your secound matrix: ");
    scanf("%d", &column1);
    column1--;
    if (column != row1)
    {
        printf("The multiplication isn't possible.\n");
    }
    else
    {
        int a[row][column];
        int b[row1][column1];
        for (int j = 0; j < column; j++)
        {
            for (int i = 0; i < row; i++)
            {
                printf("Enter the umber in [%d] [%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (int j = 0; j < column1; j++)
        {
            for (int i = 0; i < row1; i++)
            {
                printf("Enter the umber in [%d] [%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
        if (row < row1)
        {
            frow = row1;
        }
        else if (row > row1)
        {
            frow = row;
        }
        else
        {
            frow = row1;
        }
        
        if (column < column1)
        {
            fcolum = column1;
        }
        else if (column > column1)
        {
            fcolum = column;
        }
        else
        {
            fcolum = column1;
        }
        
        int multiply[frow][fcolum];

        for (int c = 0; c < row; c++)
        {
            for (int d = 0; d < column1; d++)
            {
                for (int k = 0; k < row1; k++)
                {
                    sum = sum + a[c][k] * b[k][d];
                }

                multiply[c][d] = sum;
                sum = 0;
            }
        }

        printf("\n\nProduct of the matrices:\n\n");

        for (int c = 0; c < row; c++)
        {
            for (int d = 0; d < column1; d++){
                printf("%d\t", multiply[c][d]);
            }
            printf("\n\n");
        }
    }

    return 0;
}