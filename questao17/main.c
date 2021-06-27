#include <stdio.h>
#include <stdlib.h>

int main(){
  int quantidade;//cria uma variável inteira quantidade
  int i, vetor1[9999], vetor2[9999], vetor_soma[9999];//cria 3 vetores de inteiros e uma variável inteira

  printf("Digite o tamanho dos vetores: \n");//imprime o texto ao lado
  scanf("%d", &quantidade);//solicita um valor ao usuário e o salva na variável quantidade

  for(int i=0;i<quantidade;i++){//cria um laço para percorrer o vetor vetor1 até o tamanho quantidade
    printf("Digite o número da posição %d do primeiro vetor: \n", i);//imprime a mensagem ao lado com a posição atual do laço
    scanf("%i", &vetor1[i]);//solicita ao usuário um valor inteiro e atribui ele ao valor da posição atual do vetor1 no laço
  }

  for(int i=0;i<quantidade;i++){//cria um laço para percorrer o vetor vetor2 até o tamanho quantidade
  printf("Digite o número da posição %d do segundo vetor: \n", i);//imprime a mensagem ao lado com a posição atual do laço
  scanf("%i", &vetor2[i]);//solicita ao usuário um valor inteiro e atribui ele ao valor da posição atual do vetor2 no laço
  }

  for(int i=0;i<quantidade;i++ ) {//cria um laço para percorrer o vetor1 e vetor2 para somar seus valores
    vetor_soma[i] = vetor1[i] + vetor2[i];//soma os valores das posições atuais dos vetores 1 e 2 e atribui esse valor ao vetor soma
  }

  for(int i=0;i<quantidade;i++ ) {//cria um laço para percorrer o vetor_soma e imprimir seus valores
  printf("%i ", vetor_soma[i]);//imprime o valor do vetor_soma na posição atual do laço
  }
}