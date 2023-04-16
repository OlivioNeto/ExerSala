#include <stdio.h>
void preencher(float *altura, float *base); 
void calcularArea(float altura, float base, float *area); 
int main(){
    float altura, base, area; 
    printf("Digite a base e a altura do triangulo");
    preencher(&altura, &base); 
    calcularArea(base, altura, &area);
    printf("Area do triangulo % f ", area); 
}
void preencher(float *altura, float *base) {
     scanf("%f %f", altura, base);   
} 
void calcularArea(float altura, float base, float *area){
    *area = (base * altura) /2; 
} 
