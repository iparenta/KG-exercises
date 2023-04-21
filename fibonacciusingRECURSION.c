#include <stdio.h>
#include <stdlib.h>

fibbo(int pre, int cur, int x)
{
    int temp;
    if(x == 2)
    {
        exit(0);
    }

    temp = cur;
    cur = pre + cur;
    pre = temp;
    printf("%d", cur);
    fibbo(pre, cur, x-1);
}

int main()
{
    int n, pre = 0, cur = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("%d%d", pre, cur);
    fibbo(pre, cur, n);

    printf("\n");

    return 0;

}