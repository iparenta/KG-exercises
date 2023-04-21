#include <stdio.h>

int main()
{
    int n, i, a[20], sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("\nSum of given array elements is: %d", sum);

    printf("\n");
    
    return 0;
}