#include <stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("data.txt","w");

    fprintf(fp,"Hello Git and C Programming");

    fclose(fp);

    printf("File created successfully");

    return 0;
}
