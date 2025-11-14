#include <stdio.h>

int main(void) {

    int n, rev = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        int d = temp % 10;
        rev = rev * 10 + d;
        temp = temp / 10;
    }

    printf("Input: %d\n", n);
    printf("Reversed: %d\n", rev);

    return 0;
}

