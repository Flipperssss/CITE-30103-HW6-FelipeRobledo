#include <stdio.h>

int main(void) {

    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Add: %d\n", a + b);
    printf("Sub: %d\n", a - b);
    printf("Mul: %d\n", a * b);
    printf("Div: %d\n", a / b);
    printf("Rem: %d\n", a % b);

    return 0;
}
