#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("Enter operator (+,-,*,/): ");
    scanf("%c", &op);
    printf("Enter numbers: ");
    scanf("%d%d", &a, &b);

    switch (op)
    {
        case '+':
            printf("Result:%d", a + b);
            break;;
        case '-':
            printf("Result:%d", a - b);
            break;;
        case '*':
            printf("Result:%d", a * b);
            break;;
        case '/':
            printf("Result:%d", a / b);
            break;;
        default:
            printf("Invalid operator.");
    }
    printf("\n");
    return 0;
}