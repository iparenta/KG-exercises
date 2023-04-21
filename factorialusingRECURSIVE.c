#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    int f;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        f = n * fact(n -1);
        return f;
    }
}

int main()
    {
        int n;
        printf("Enter number: ");
        scanf("%d", &n);
        printf("\nFactorial is ... %d\n", fact(n));

        printf("\n");
        
        return 0;
     }
