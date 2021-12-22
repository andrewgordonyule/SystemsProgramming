/*
3. Modify file to create three threads, each of which run printFilm() with a movie_t argument
4. Modify main() to join each thread, storing return value
*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_THREADS 3

typedef struct _movie {
    char title[50];
    int year_released;
    float rating;
} movie_t;

void * printFilm(void * arg) {
    movie_t * film = (movie_t *) arg;
    printf("%s (%d) has a metacritic score of %.2f\n",
           film->title,
           film->year_released,
           film->rating);
    pthread_exit(film);
}

int main() {

    movie_t films[NUM_THREADS] = {
        {"Fantastic Mr. Fox", 2009, 83},
        {"Grand Budapest Hotel", 2014, 88},
        {"Isle of Dogs", 2018, 82}
    };

    // Start NUM_THREADS threads which each run printFilm
    // passing in a pointer to a movie_t each time

    // Question 3 - Modify file to create three threads

    pthread_t threads[NUM_THREADS];
    int i;
    for(i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, printFilm, &films[i]);

        // Question 4 - join each thread, store return value and print
        // <film title> thread finished.
        movie_t * filmreturn;

        // pthread_join() 2nd argument is what is returned by pthread_exit()
        pthread_join(threads[i], (void **)&filmreturn);
        printf("%s thread finished!\n", filmreturn->title);
    }

    return 0;

}
