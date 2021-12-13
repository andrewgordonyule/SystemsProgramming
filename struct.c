#include<stdio.h>

// we can define our own data structure using 'structs'

typedef struct address {
    int housenumber;
    char postcode[8];
} address_t;

// address_t can be used as a valid type


int main() {

    address_t myAddress;
    printf("Enter your house number:\n");
    scanf("%d", &(myAddress.housenumber));
    printf("Enter your postcode:\n");
    scanf("%s", &(myAddress.postcode));

    printf("You live at %d, %s.", myAddress.housenumber, myAddress.postcode);

    return 0;
}