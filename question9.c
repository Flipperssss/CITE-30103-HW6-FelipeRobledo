#include <stdio.h>

int main(void) {

    int a = 7, b = 3;

    int intDiv = a / b;
    float floatDiv1 = a / b;  
    float floatDiv2 = (float)a / b; 

    printf("Integer division: %d\n", intDiv);
    printf("Float division implicit: %.2f\n", floatDiv1);
    printf("Float division explicit: %.2f\n", floatDiv2);

    return 0;
}
