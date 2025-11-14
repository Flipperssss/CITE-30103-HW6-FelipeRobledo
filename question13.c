#include <stdio.h>

int main(void) {

    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int ok = (n % 2 == 0) && (n % 3 == 0) && (n % 7 != 0);

    if (ok)
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}
