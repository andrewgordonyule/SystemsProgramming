#include<stdio.h>

int main() {

    int i;

    // for loop
    for(i = 0; i < 5; i++) {
        printf("%d\t", i);
    }

    printf("\n");
    int j = 0;
    
    // for loop used as a while loop
    for(; j < 5; ) {
        printf("%d\t", j);
        j = j + 2;
    }

    printf("\n");
    int k = 1;

    // while loop
    while (k < 5) {
        printf("%d\t", k);
        k++;
    }

    return 0;

}