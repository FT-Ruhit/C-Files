#include <stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
} harry, ravi, shubham;

void printing_data()
{
    printf("Harry's ID, Marks and Favourite character is as following %d, %d, %c\n", harry.id, harry.marks, harry.fav_char);
    printf("Ravi's ID, Marks and Favourite character is as following %d, %d, %c\n", ravi.id, ravi.marks, ravi.fav_char);
    printf("Shubham's ID, Marks and Favourite character is as following %d, %d, %c\n", shubham.id, shubham.marks, shubham.fav_char);
}

int main()
{
    // all data
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 66;
    ravi.marks = 466;
    shubham.marks = 466;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';

    printing_data();

    return 0;
}

/*

Done

*/