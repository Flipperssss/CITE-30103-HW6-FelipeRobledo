#include <stdio.h>

/* Define section */
#define PI_DEF 3.14159

int main(void) {

    const float PI_CONST = 3.14159;

    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area1 = PI_DEF * radius * radius;
    float circ1 = 2 * PI_DEF * radius;

    float area2 = PI_CONST * radius * radius;
    float circ2 = 2 * PI_CONST * radius;

    printf("Area (define): %.2f\n", area1);
    printf("Circumference (define): %.2f\n", circ1);

    printf("Area (const): %.2f\n", area2);
    printf("Circumference (const): %.2f\n", circ2);

    return 0;
}
