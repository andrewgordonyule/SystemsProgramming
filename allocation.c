
int main() {

    // heap memory - allocated by the OS

    // malloc allocates a size of memory on heap
    int * myInteger = malloc(sizeof(int));

    // calloc - contiguous memory allocation
    int * myInteger2 = calloc(sizeof(int), 5);

    // realloc - reallocating memory
    char myString[2] = realloc(myInteger, sizeof(char) * 2);


    char myString[2] = malloc(sizeof(char) * 2);
    // or
    char myString[2] = calloc(sizeof(char), 2);

    // tries to 'free' myInteger from heap
    char myString[2] = realloc(myInteger, sizeof(char) * 2);

    return 0;

}