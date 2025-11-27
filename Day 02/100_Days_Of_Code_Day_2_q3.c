#include <stdio.h>
int main () {
    int l,w,a,p;
    printf("Enter length of rectangle:");
    scanf("%d",&l);
    printf("Enter width of rectangle:");
    scanf("%d",&w);
    a = l * w;
    printf("Area of Rectangle is: %d\n",a);
    p = (l + w) * 2;
    printf("Perimeter of Rectangle is: %d",p);
    return 0;
}