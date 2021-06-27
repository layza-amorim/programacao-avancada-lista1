#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {//função para comparar 2 valores
   return ( *(int*)a - *(int*)b );
} 

int main(){
  int quantidade;//cria uma variável inteira quantidade
  float i, vetor[9999];//cria um vetor de float e uma variável float

  printf("Digite o tamanho do vetor: \n");//imprime o texto ao lado
  scanf("%d", &quantidade);//solicita um valor ao usuário e o salva na variável quantidade

  for(int i=0;i<quantidade;i++){//cria um laço para percorrer o vetor vetor até o tamanho quantidad
    printf("Digite o número da posição %d do vetor: \n", i);//imprime a mensagem ao lado
    scanf("%f", &vetor[i]);//solicita ao usuário um valor float e atribui ele ao valor da posição atual do vetor no laço
  }

  qsort(vetor, quantidade, sizeof(int), comparador);//ordena o vetor vetor com a função qsort

  for(int i=0;i<quantidade;i++ ) {//cria um laço para percorrer o vetor e imprimir todos seus valores
    printf("%f ", vetor[i]);//imprime o valor do vetor na posiçãoatual do laço
   }
}