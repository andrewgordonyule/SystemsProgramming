#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *entry(void *arg) {

    int *myThreadNumber = (int *)arg;
    printf("My thread number here.\n", *myThreadNumber);
    return NULL;

}

int main() {

    pthread_t thread[5];
    int arguments[5] = {1,2,3,4,5};

    int i;
    for (i = 0; i < 5; i++) {
        
        pthread_create(&threads[i], NULL, entry, &arguments[i]);

    }

    for (i = 0; i < 5; i++) {

        pthread_join(threads[i], NULL);
        
    }

    return 0;
}