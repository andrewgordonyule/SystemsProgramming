#include<stdio.h>
#include<string.h>

typedef struct _address {
    char streetname[50];
    char postcode[8];
    char name[50];
} address_t;

// Original code - new stack variables are created
// void moveHouse(char newStreet[], char newPostcode[], address_t addr) {
//     strcpy(addr.streetname, newStreet);
//     strcpy(addr.postcode, newPostcode);
// }

// need to pass pointer and use arrow notation
void moveHouse(char newStreet[], char newPostcode[], address_t *addr) {
    strcpy(addr->streetname, newStreet);
    strcpy(addr->postcode, newPostcode);
}

int main() {

    address_t bobs_flat = {"1 Byres Road", "G12 3YZ", "Bob Jones"};
    printf("%s used to live at %s, %s.\n",
            bobs_flat.name,
            bobs_flat.streetname,
            bobs_flat.postcode);

    moveHouse("7 Byres Road", "G11 1AB", &bobs_flat);
    printf("%s moved and now lives at %s, %s.\n",
            bobs_flat.name,
            bobs_flat.streetname,
            bobs_flat.postcode);

    return 0;
}