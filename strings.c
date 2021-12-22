#include<stdio.h>
#include<string.h>

typedef struct Person {
    char name[20];
    int age;
    // struct Person * manager;
} person_t;


int main(int argc, char *argv[]) {

    person_t myUser = {"", 0};

    // strcpy - string copy
    char firstname[10];
    char lastname[10];
    printf("What is your firstname?\n");
    scanf("%s", &firstname);

    // want to write to address in memory
    // copies firstname value into address of myUser.name
    strcpy(myUser.name, firstname);

    // example from lecture throwing errors
    // strcpy(&(myUser.name), firstname);

    printf("What is your surname?\n");
    scanf("%s", &lastname);

    // concat needed twice
    strcat(myUser.name, " ");
    strcat(myUser.name, lastname);


    // strlen - returns length of a string
    // function looks for null terminator
    printf("Your name is %s and has %d characters.\n", myUser.name, strlen(myUser.name));

    return 0;
}


// char *myString;
// strcpy(&myString, "my text");


//char * myString = "andy";
    // this doesnt work in C:
    // myString = "andrew"

// printf("What is your name?\n");
    // scanf("%s", &(andy.name));
    // printf("Your name is %s\n", andy.name);