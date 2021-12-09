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

// return the length of collatz sequence for given number n
int collatzLength(int n) {

    int len = 0;

    for(; n > 1; ) {
        if(n % 2 == 0) {
            n = n/2;
        } else {
            n = 3*n + 1;
        }
        len++;
    }
    // +1 to account for final 1
    return len + 1;

}

int main() {

    int max_length = 0;
    int current_num;
    int collatz_num;

    int num;
    printf("Enter your number:");
    scanf("%dn", &num);

    printf("The collatz sequence starting from %d is:\n", num);
    collatz(num);

    int sequence_length = collatzLength(5);
    printf("Collatz sequence length of 5 is: %d\n", sequence_length);

    int i;
    for(i = 2; i < 101; i++) {
        current_num = collatzLength(i);
        if (current_num > max_length) {
            max_length = current_num;
            collatz_num = i;
        }
    }

    printf("Max sequence length is %d with number %d", max_length, collatz_num);

    return 0;
}