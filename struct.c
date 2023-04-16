# include <stdio.h>
# include <string.h>

struct Dados{
  int codigo; 
  char nome [10];
  float salario;
}

typedef struct Dados Dados; 

int main (){
  Dados aluno1, aluno2; 
  aluno1.codigo = 1;
  aluno1.salario= 1000; 
  strcpy(aluno1.nome, "Olivio Marques Brito Neto");
  printf("Código: %d\n", aluno1.codigo);
  printf("Nome: %d\n", aluno1.nome);
  printf("Salário: %d\n", aluno1.salario);
  printf("----------------------------------------------");
  aluno2.codigo = 2;
  aluno2.salario= 2000; 
  strcpy(aluno2.nome, "Olivio Marques Lindo Neto");
  printf("Código: %d\n", aluno2.codigo);
  printf("Nome: %d\n", aluno2.nome);
  printf("Salário: %d\n", aluno2.salario);
}