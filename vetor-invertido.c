#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){ 
    int vetorA[N], vetorB[N], i; 
    srand(time(NULL)); 
    for(i = 0; i < N; i++){ 
        vetorA[i] = rand()%21; 
        printf("A[%d]: %d\n", (i+1), vetorA[i]); } 
        vetorB[0]= vetorA[4]; 
        vetorB[1]= vetorA[3]; 
        vetorB[2]= vetorA[2]; 
        vetorB[3]= vetorA[1]; 
        vetorB[4]= vetorA[0]; 
        printf("-------------------------------------\n"); 
        for(i = 0; i < N; i++){ 
            vetorB[i] = vetorA[N-(i+1)]; 
            printf("B[%d]: %d\n", (i+1), vetorB[i]); 
            } 
}
