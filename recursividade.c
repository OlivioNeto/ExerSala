#include <stdio.h>

int fat(int numero);
int main(){
    int numero=5, fatorial;

    printf("Fatorail de %d é: %d\n", numero, fat(numero));  

}
int fat(int numero){
    if (numero == 0) 
    return 1; 
    else 
    return numero * fat(numero-1);
}

int soma(int numero);
int main(){
    int numero=10, fatorial;

    printf("Fatorail de %d é: %d\n", numero, fat(numero));  

}
int soma(int numero){
    if (numero == 0) 
    return 0; 
    else 
    return numero * fat(numero-1);
}