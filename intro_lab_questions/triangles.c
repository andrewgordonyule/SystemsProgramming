#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input your longest side: ");
    scanf("%d", &a); // A is biggest.
    printf("Input your second longest side: ");
    scanf("%d", &b); // b is next
    printf("Input your smallest side: ");
    scanf("%d", &c); // c is smallest!

    // Assume a > b > c.

    if((a*a) == (b*b) + (c*c)){
        printf("This is a right angled triangle");
    } else {
        printf("This is not a right angled triangle");
    }

    return 0;

}