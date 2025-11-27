#include <stdio.h>
int main() {
    int r,a,c;
    const float PI = 3.141592653589;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    a = r * r * PI;
    printf("Area of circle is: %d\n",a);
    c = 2 * r * PI;
    printf("Circumference of circle is: %d",c);
    return 0;
}