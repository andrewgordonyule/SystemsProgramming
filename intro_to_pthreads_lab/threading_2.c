/*
    Modify main from threading_1.c so that it waits for each
    thread to finish.
*/
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_THREADS 14

// void pointer functions
// need to cast type of arg

void * entry(void * arg) {
    char *myChar = (char *)arg;
    printf("%c\n", *myChar);
}

int main() {

    char hw[] = "Hello, world!";
    pthread_t threads[NUM_THREADS];
    int i;
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, entry, &hw[i]);
        pthread_join(threads[i], NULL);
    }

    return 0;

}