#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#define N 4
int main(){
    int matriz[N][N],l , c, maior, menor, soma; 
    srand(time(NULL));
    printf("\n\n\n\n"); 
    for (l=0; l<N; l++){
        for (c=0; c<N; c++){
            matriz[l][c]= rand() %51;
            printf("%2d  ", matriz [l][c]); 
        }
        printf("\n"); 
    }
    printf("\n\n"); 
    maior = matriz[0][0]; 
    for(l=0; l<N; l++){
        for(c=0; c<N; c++){
            if(matriz[l][c] > maior){
                maior = matriz [l][c]; 
            }

        }
    }
    printf("\n\n");
    menor = matriz[0][0]; 
     for(l=0; l<N; l++){
        for(c=0; c<N; c++){
            if(matriz[l][c] < menor){
                menor = matriz[l][c]; 
            }
        }
        }
    printf("\n\n");
       
    printf("Maior..........%d", maior); 
    printf("\n\n");
    printf("Menor.........%d", menor); 
    

}