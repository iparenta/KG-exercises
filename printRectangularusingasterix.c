#include <stdio.h>

int main()
{
    int i, j;
    printf("\n");

    for (i = 1; i <=79; i++)
    {
        printf("*");
    }
    for (i = 2; i <= 23; i++)
    {
        printf("*");
        for(j = 2; j <= 79; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for (i =1; i <= 80; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}