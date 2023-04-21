#include <stdio.h>

int main()
{
    int i, j, m, n, a[5][5];
    printf("Enter order od matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter matrix elemnts...\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;

}