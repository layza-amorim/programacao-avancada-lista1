#include <stdio.h>
#include <stdlib.h>

void trocar(float* a, float* b) {//cria função trocar para trocar valores float caso necessário, recebendo 2 ponteiros
   int aux = *a;//cria variável auxiliar inicializando ela com o valor que o ponteiro a aponta
   *a = *b;//o ponteiro a passa a apontar para o valor que o ponteiro b aponta
   *b = aux;//o ponteiro b passa a apontar para aux
}

void borbulhar(float *primeiro, float *ultimo) {//cria a função borbulhar para ordenar o vetor, recebendo o primeiro e último valor de um vetor (ponteiros)
   int nao_tcorreu_troca;//cria variável inteira 
   for (float *i; ultimo > primeiro; --ultimo) {//cria um for para ir percorrendo do último valor até o primeiro do vetor e então ordenar
      nao_tcorreu_troca = 1;//inicia variável nao_tcorreu_troca com 1
      for (i = primeiro; i < ultimo; ++i) {//cria laço para percorrer do primeiro ao último valor do vetor
         if (*i > *(i+1)) {//faz a comparação de um valor é maior que outro e então a troca, caso seja verdade
            trocar(i, i+1);//chama a função trocar para realizar a troca
            nao_tcorreu_troca = 0;//nao_tcorreu_troca recebe zero para encerrar o laço
         }
      }
      if (nao_tcorreu_troca){return;}//encerra o laço
   }
}

int main(void)
{
  float *v; //cria o ponteiro v
  int i, quantidade;//cria os inteiros i e quantidade
  
  printf("Digite o tamanho do vetor\n");//imprime a mensagem ao lado
  scanf("%d", &quantidade);//solicita ao usuário um valor e salva na variável quantidade
  
  v = (float *) malloc(quantidade * sizeof(float));//Converte o ponteiro para o tipo de dados desejado e reserva a quantidade de memória necessária usando a função malloc
  
  for (i=0;i<quantidade;i++){//cria um laço for para solicitar ao usuário os dados do vetor 
    printf("\nDigite o valor da posicao %d do vetor: ", i+1);//imprime a mensagem ao lado com a posição atual do laço
    scanf("%f",&v[i]);//solicita ao usuário um valor e o salva na posição atual do laço no vetor v
  }

  borbulhar(v, &v[quantidade]);//ordena o vetor v através do método borbulhar
  
  for (i=1;i<=quantidade;i++){//cria um laço for para imprimir os valores do vetor v
  printf("%f, ", v[i]);//imprime o valor do vetor v na posição atual do laço
  }

  free(v);//libera o espaço de memória que foi alocado  
  return 0;
}