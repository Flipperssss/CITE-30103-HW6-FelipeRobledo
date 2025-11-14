#include <stdio.h>

int main(void) {

    int a, b, c, d, e;

    printf("Enter five marks: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int pass = (a >= 40) && (b >= 40) && (c >= 40) && (d >= 40) && (e >= 40);

    if (pass)
        printf("PASS\n");
    else
        printf("FAIL\n");

    return 0;
}
