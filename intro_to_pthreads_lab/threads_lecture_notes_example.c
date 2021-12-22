// Example from lecture notes pdf
/*
This produces NUM_THREADS threads, each of which
runs `entry()` as their entrypoint. `entry` interprets
its argument as a pointer to an integer, which will
represent its thread #. It will print this and exit,
returning its thread ID squared. Our main thread will
wait for each thread to finish executing, collect
each thread's return values, print them, and exit.
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM_THREADS 5

// thread entrypoint must accept and return a void *
void * entry(void * arg) {
    // (int *) to reinterpret arg as a pointer to an int
    int * id = (int *) arg;
    printf("I'm thread %d.", *id);

    // malloc to safely return a pointer, and then calculate square
    int * toreturn = malloc(sizeof(int));
    *toreturn = pow(*id, 2);

    // return the pointer to the squared value
    pthread_exit(toreturn);
}

int main() {

    pthread_t threads[NUM_THREADS];
    int args[NUM_THREADS];

    int i;
    for(i = 0; i < NUM_THREADS; i++) {
        args[i] = i + 1;

        // start NUM_THREADS threads
        pthread_create(&threads[i], NULL, entry, &args[i]);
    }

    int * squares[NUM_THREADS];
    for(i = 0; i < NUM_THREADS; i++) {
        // wait for thread 'i' to finish. Store returned pointer in squares[i]
        // squares[i] needs to look like a void *, and we need to
        // pass the address of squares[i] so that we can change the value
        pthread_join(threads[i], (void *)&squares[i]);

    }

    // print the returned squared values, free malloc'd memory
    for(i = 0; i < NUM_THREADS; i++) {
        printf("%d squared is %d\n", args[i], *squares[i]);
        free(squares[i]);
    }

    // we can always exit with the NULL pointer
    pthread_exit(NULL);
}