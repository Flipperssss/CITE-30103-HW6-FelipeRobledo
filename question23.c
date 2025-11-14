#include <stdio.h>

int main(void) {

    int n;
    int pos = 0, neg = 0, even = 0, odd = 0;

    do {

        printf("Enter number: ");
        scanf("%d", &n);

        if (n != 0) {

            if (n > 0) pos++;
            else neg++;

            if (n % 2 == 0) even++;
            else odd++;
        }

    } while (n != 0);

    printf("Pos: %d\n", pos);
    printf("Neg: %d\n", neg);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}

