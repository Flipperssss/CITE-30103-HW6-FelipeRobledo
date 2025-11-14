#include <stdio.h>

int main(void) {

    int n, count = 0;

    do {
        printf("Enter number: ");
        scanf("%d", &n);

        if (n != 0)
            count++;

    } while (n != 0);

    printf("Count: %d\n", count);

    return 0;
}

