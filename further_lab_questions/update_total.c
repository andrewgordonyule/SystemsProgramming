#include<stdio.h>

// original - doesn't work because you are only updating stack variables?
// void update_total(int x) {
//     // get user input and add to total
//     int user_input;
//     scanf("%d", &user_input);
//     x = x + user_input;
// }

void update_total(int *x) {
    // get user input and add to total
    int user_input;
    scanf("%d", &user_input);
    *x = *x + user_input;
}

int main() {

    int total = 0;

    while (total <= 15) {
        printf("\n\nYour current total is %d, \nWhat will you add? >", total);
        update_total(&total);
    }

    printf("\nYou made it to %d, which is above 15! Stopping now.", total);
    return 0;
}