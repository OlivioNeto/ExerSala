# include <stdio.h>
# include <string.h>
#define N 2
struct Dados{
  int codigo; 
  char nome [10];
  float salario;
}

typedef struct Dados Dados; 

int main (){
  Dados aluno[N]; 
  int i; 
  for(i = 0; i < N; i++){
  
  printf("Código: %d\n");
  scanf("%d",&aluno[i].codigo);
  printf("Nome: %d\n");
  scanf("%d",aluno[i].nome);
  printf("Salário: %d\n");
  scanf("%f",&aluno[i].salario);
  }
  
  printf("----------------------------------------------");
  for(i = 0; i < N; i++){
   printf("Código: %d\n");
  printf("Nome: %d\n");
  printf("Salário: %d\n");
  printf("------------------");
  }
}