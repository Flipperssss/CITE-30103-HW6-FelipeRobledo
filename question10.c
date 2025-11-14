#include <stdio.h>

int main(void) {

    char c;
    int i;
    long int li;
    float f;
    double d;

    printf("char size: %zu\n", sizeof(c));
    printf("int size: %zu\n", sizeof(i));
    printf("long int size: %zu\n", sizeof(li));
    printf("float size: %zu\n", sizeof(f));
    printf("double size: %zu\n", sizeof(d));

    return 0;
}
