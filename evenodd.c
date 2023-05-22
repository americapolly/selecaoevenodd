#include <stdio.h>

int main(void) {
int notaAluno;
int qtdAluno = 10;
float somaNotaPar = 0, somaNotaImpar = 0;
float divisorNotaPar = 0, divisorNotaImpar = 0;
int i;
  
for(i = 1; i <= qtdAluno; i++){
 
  printf("escreva a nota %d \n", i);
  scanf("%d",&notaAluno);
  
  if(i%2==0){
    somaNotaPar = somaNotaPar + notaAluno;
    divisorNotaPar++;
  }
  else
  {
    somaNotaImpar = somaNotaImpar + notaAluno;
    divisorNotaImpar++;
   
  }
}
  printf("media da turma impar %.2f \n", somaNotaImpar/divisorNotaImpar);
  printf("media da turma par %.2f \n", somaNotaPar/divisorNotaPar);
 
  return 0;
}
