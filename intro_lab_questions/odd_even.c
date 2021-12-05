#include <stdio.h>

void odd_even(int * num) {

    if (*num % 2 == 0) {
        printf("%d is an even number.\n", *num);
    } else {
        printf("%d is an odd number.\n", *num);
    }

}

int main() {

    // scanf("%d", &a) := reads integer value into variable 'a'
    
    int a, b, c, d, e;
    printf("Input your first number: ");
    scanf("%d", &a);
    printf("Input your second number: ");
    scanf("%d", &b);
    printf("Input your third number: ");
    scanf("%d", &c);
    printf("Input your fourth number: ");
    scanf("%d", &d);
    printf("Input your fifth number: ");
    scanf("%d", &e);

    // similar example from lecture - using pointers
    odd_even(&a);
    odd_even(&b);
    odd_even(&c);
    odd_even(&d);
    odd_even(&e);

    return 0;

}