#include<stdio.h>

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("num is stored at address: %d\n", &num);
    printf("num has the value of: %d\n", num);

    // a pointer is a variable which stores the address of another variable
    int * point;
    printf("point is stored at address: %d\n", &point);
    point = &num;
    printf("point has the value of: %d\n", point);

    // a pointer to a pointer must be declared with **
    int ** point2;
    printf("point2 is stored at address: %d\n", &point2);
    point2 = &point;
    printf("point2 has the value of: %d\n", point2);

    printf("point2 actually points to: %d", **point2);


    return 0;
}