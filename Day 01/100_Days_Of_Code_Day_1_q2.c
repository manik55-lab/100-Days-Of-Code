#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    c = a + b;
    printf("Sum of numbers is: %d\n",c);
    d = a * b;
    printf("Product of numbers is: %d\n",d);
    e = a - b;
    printf("Difference of numbers is: %d\n",e);
    if (b == 0) {
        printf("Division by zero is undefined\n");
    }else {
        f = a / b;
        printf("Quotient of number is: %d \n",f);
    }
    return 0;
}