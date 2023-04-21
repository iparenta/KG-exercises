#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            printf("Not Prime\n");
            exit(0);
        }
    }
    printf("Prime \n");

    return 0;
}