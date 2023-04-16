    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #define N 2000

    int main(){
        int vetorIdade [N], i; 

        srand(time(NULL)); //nova semente 
        for(int i=0; i<20; i++){
            printf("Digite a sua idade (%d): ", i+1 );
            scanf("%d", & vetorIdade[i]);

            vetorIdade[i]=rand()%11+10; //gera números aleatorios de 10 a 20
        }
        for(int i=0; i<N; i++){
            printf("Idade do %dº: %d", i+1, vetorIdade)
        }
    }