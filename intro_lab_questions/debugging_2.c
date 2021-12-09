#include <stdio.h>

int main() {
    // This program finds the sum of all multiples of 3 and 5 below 100.
    // It has an error in logic and a syntax error. Correct both.
    // This should print 2318 when fixed.
    // int total = 0;
    // int i;
    // for (i++; i < 100; i = 0) {
    //     if (i%3 == 0 || i%5 == 0) {
    //         total = total + i;
    //     }
    // }

    int total = 0;
    int i;
    // incorrect for loop declaration
    for (i = 0; i < 100; i++) {
        if (i%3 == 0 || i%5 == 0) {
            total = total + i;
        }
    }

    printf("Sum of all multiples is %d.\n", total);
    return 0;
}