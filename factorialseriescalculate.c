#include <stdio.h>


// 1/2! + 2/3! + 3/4! + 4/5!+ ...
int main()
{
    int i, j, n;
    float sum = 0, fact = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        fact =1;
        for (j =1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + i/fact;
    }
    printf("Sum of the series ... %f", sum);

    return 0;
}