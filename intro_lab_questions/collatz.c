// Print a collatz sequence for hardcoded n
#include<stdio.h>

void collatz(int n) {
    for(; n > 1; ) {
        printf("%d\n", n);
        if(n % 2 == 0) {
            n = n/2;
        } else {
            n = 3*n + 1;
        }
    }
    printf("%d\n", n);
}

int main() {

    int num;
    printf("Enter your number:");
    scanf("%dn", &num);

    printf("The collatz sequence starting from %d is:\n", num);
    collatz(num);

    return 0;
}