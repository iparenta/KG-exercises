#include <stdio.h>

int main()
{
    int n, newn, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Numbers entered .... \n");

    for ( i = 1; i <= n; i++)
    {
       scanf("%d", &newn);
       sum = sum + newn;
    }
    printf("Sum of given n digits is ... %d\n", sum);

    return 0;
}