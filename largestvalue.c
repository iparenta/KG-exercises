#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter numbers: ");
    scanf("%d%d", &a, &b);
    (a>b)? printf("Largest value is ....%d", a): printf("Largest value is ...%d", b);

}