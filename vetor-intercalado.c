#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int main(){ 
    int A[N], B[N],C[N], i; 
    srand(time(NULL)); 
    for(i = 0; i < 2*N; i+=2){ 
        C[0]= A[0]; 
        C[1]= B[0]; 
        
        C[2]= A[1]; 
        C[3]= B[1]; 
        
        C[4]= A[2];
        C[5]= B[2];

        C[6]= B[3];
        C[7]= B[3];

        C[8]= B[4]; 
        C[9]= B[4];
        printf("-------------------------------------\n"); 
        for(i = 0; i < N; i++){ 
            B[i] = A[N-(i+1)]; 
            printf("B[%d]: %d\n", (i+1), B[i]); 
            } 
}
}