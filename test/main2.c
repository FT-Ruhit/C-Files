#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
    printf("Creating a bionary file...");
    FILE *fp = fopen("bin1.rec", "w");
    fprintf(fp, "Hello, world!\n");
    fclose(fp);
    return 0;
}