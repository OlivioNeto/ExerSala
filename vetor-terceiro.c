#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){ 
    int vetorA[N], vetorB[N], i, vetorC[N]; 
    srand(time(NULL)); 
    for(i = 0; i < N; i++){ 
        vetorA[i] = rand()%11;
        vetorB[i] = rand()%11;
        printf("\n\n VetorA[%d]=%2d       -       VetorB[%d]=%2d\n", i, vetorA[i],i, vetorB[i]);
    } for(i=0; i<N; i++) {
        vetorC[i] = vetorA[i];
        vetorC[i+N] = vetorB[i];
    } for (i=0; i<2*N; i++) {
        printf("\n\n VetorC[%d]=%2\n", i,vetorC[i]);
    }
}