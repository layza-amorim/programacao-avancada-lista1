#include <stdio.h>

//Um ponteiro para função guarda o endereço de uma função na memória virtual, ou seja, o endereço da área de código. 
//Serve principalmente para definir a função que será executada, sem a necessidade de escrever o nome dela naquele ponto do código.

int duplicate(int n){
  return n*2;
}

int main(){
  int (*pf) (int) = &duplicate;
  printf("duplicate 4: %d", pf(4));
}