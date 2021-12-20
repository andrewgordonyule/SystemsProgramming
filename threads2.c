#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


void * increment(void *arg) {

    int *myInt = (int *)arg;
    *myInt = *myInt + 1;
    return NULL;

}

int main() {

    int x = 5;
    pthread_t thread;

    // pthread_create args - *thread, *attribute(NULL for default attr), start routine, arg
    pthread_create(&thread, NULL, increment, &x);

    // pthread_join - waits for specified thread to terminate
    pthread_join(thread, NULL);
    printf("x == %d\n", x);

    return 0;
}