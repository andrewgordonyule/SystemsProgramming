#include<stdio.h>

typedef struct address {
    int housenumber;
    char postcode[8];
} address_t;

// can't use usual 'dot notation' as pointer needs dereferenced
// arrows follow a pointer
void setAddress(address_t *addressToSet) {

    printf("Enter your house number:\n");
    scanf("%d", &(addressToSet->housenumber));
    printf("Enter your postcode:\n");
    scanf("%s", &(addressToSet->postcode));

}


int main() {

    address_t myAddress;
    setAddress(&myAddress);    
    printf("You live at %d, %s.", myAddress.housenumber, myAddress.postcode);

    return 0;
}