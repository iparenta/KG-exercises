#include <stdio.h>

int main()
{
    int i, n, a[20], j, max, min, temp;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Enter array numbers...\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d:", i +1);
        scanf("%d", &a[i]);
    }

    max = a[0];

    for ( i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Ascending order...\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    min = a[0];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nDescending order...\n");
    for(i =0; i < n; i ++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
 }