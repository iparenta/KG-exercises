#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= (n - k); j++)
        {
            printf("*");
        }
        for (j = 1; j <= (n - k); j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}

/*
int i, j, k, n;
printf("ENter number: ");
scanf("%d", &n);

for (i = n, i >= 1; i--)
{
    for(k =1; k <=(n-1); k++)
    {
        printf(" ");
    }
    for(j = 1; j <= i; j++)
    {  
         printf("*");
    }
    for(j = 2; j <= i; j ++)
    {
        printf("*");
    }
    printf("\n");

}
*/