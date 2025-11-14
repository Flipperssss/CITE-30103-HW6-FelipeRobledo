#include <stdio.h>

int main(void) {

    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    char *msg = n > 0 ? "Positive" : n < 0 ? "Negative" : "Zero";

    printf("%s\n", msg);

    return 0;
}
