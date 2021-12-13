#include<stdio.h>

void swap(int *num1, int *num2) {

    // assign values to addresses pointed at by x and y
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
}

int main() {

    int x = 1;
    int y = 2;

    printf("x is: %d\n", x);
    printf("y is: %d\n", y);

    int * pointer_x = &x;
    int * pointer_y = &y;

    // passing in the pointers to x and y
    swap(pointer_x, pointer_y);

    printf("x is now: %d\n", x);
    printf("y is now: %d\n", y);

    return 0;
}