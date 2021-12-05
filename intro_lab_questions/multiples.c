#include <stdio.h>

int main() {
    int limit;
    int factor;
    printf("What's the limit on the iteration you want printing?  ");
    scanf("%d", &limit);
    printf("What factor would you like multiples of?  ");
    scanf("%d", &factor);

    int i;
    int sum;

    for(i = 0; i <= limit; i++){
        sum = i * factor;
        printf("%d * %d = %d\n", factor, i, sum);
    }

    return 0;
    
}