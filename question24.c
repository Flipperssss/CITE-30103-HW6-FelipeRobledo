#include <stdio.h>

int main(void) {

    int count = 0;

    for (int i = 1; i <= 50; i++) {

        if (i == 40)
            break;

        if (i % 5 == 0)
            continue;

        printf("%d\n", i);
        count++;
    }

    printf("Displayed: %d\n", count);

    return 0;
}

