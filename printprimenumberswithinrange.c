#include <stdio.h>
/* POGRESNO MOJE!
int main()
{
    int i, max, min;

    printf("Enter lowest number: ");
    scanf("%d", &min);

    printf("\nEnter highest number: ");
    scanf("%d", &max);

    for (i = min; i <= max; i++)
    {
        printf("\n%d", i);
    }
    printf("\n");
    return 0;
}

*/

int main()
{
    int i, flag = 1, n, newn;

    printf("Enter number: ");
    scanf("%d", &n);

    for(newn = 2; newn<= n; newn++)
    {
        flag = 1;
        for(i = 2; i <= newn/2; i++)
        {
            if(newn % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            printf("%d\n", newn);
        }
       
    }
    printf("\n");
    return 0;
}