#include <stdio.h>

int main(){
    int a, b, temp;
    printf("Enter numbers: ");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping.. \na=%d, b=%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping.. \na=%d, b=%d", a, b);

    return 0;
}