#include <stdio.h>
int main(){
int area;
int perimeter;
int l, w;
printf("Enter the Length: ");
scanf("%d", &l);
printf("Enter the Width: ");
scanf("%d", &w);
area = l * w;
perimeter = 2*(l+w);
printf("Area: %d\nPerimeter: %d\n", area, perimeter);
return 0;
}
