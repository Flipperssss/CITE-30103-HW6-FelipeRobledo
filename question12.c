#include <stdio.h>

int main(void) {

    int a = 5, b = 3, res;

    res = (a + b) << 1;
    printf("Fix 1: %d\n", res);

    res = (a + b) * 2;
    printf("Fix 2: %d\n", res);

    return 0;
}

