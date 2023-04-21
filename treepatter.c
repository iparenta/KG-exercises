#include <stdio.h>

int main()
{
    int i, j, k, l, n;

    printf("Enter number: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (l = 1; l <= (i - 1); l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
int i,j,k,n;
printf("Enter number: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for (k = 1; k <= (n - i); k++)
        {
            printf(" ");
        }
        for (j =1; j <= i; i++)
        {
            printf("*");
        }
        for (j =2; j <= i; i++)
        {
            printf("*");
        }
        printf("\n");

*/