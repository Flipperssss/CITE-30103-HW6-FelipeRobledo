#include <stdio.h>

/* Global variable */
int g = 50;

int main(void) {

    /* Local variable */
    int l = 20;

    printf("Global: %d\n", g);
    printf("Local: %d\n", l);

    return 0;
}
