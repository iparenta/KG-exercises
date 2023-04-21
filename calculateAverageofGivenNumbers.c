#include <stdio.h>

int main()
{
    int n, i, newn, sum_avg= 0;
    float avg;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter numbers... ");

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &newn);
        sum_avg = sum_avg +newn;
    }

    avg = sum_avg/(float)n; //Type casting.

    printf("\n Average = %f\n", avg);

    return 0;
}