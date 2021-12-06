// Fibonacci sequence - without using functions
#include <stdio.h>

int main() {
    int n;
    printf("How many fibonacci numbers do you want to print?  ");
    scanf("%d", &n);

    // print n fibonacci numbers
    int i;
    int n_minus_1 = 1;
    int n_minus_2 = 1;
    int n_current;

    for(i = 0; i < n; i++) {

        if(i == 0 || i == 1){
            printf("1 ");
        } else {
            n_current = n_minus_1 + n_minus_2;
            printf("%d ", n_current);

            n_minus_2 = n_minus_1;
            n_minus_1 = n_current;
        }
    }

    return 0;

}