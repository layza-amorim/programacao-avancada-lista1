#include <stdio.h>

int main(){

  char xchar[4] = {"4092"};
  int xint[4] = {1,2,3,4};
  float xfloat[4] = {1,2,3,4};
  double xdouble[4] = {1,2,3,4};


  printf("Valores em char:\n");
  for(int i=0;i<4;i++){
  printf("x + %d = %p \n",i+1 ,(xchar+i));//valores aumentando de 1 em 1 byte
  }
  printf("\n");
  printf("Valores em int:\n");
  for(int i=0;i<4;i++){
  printf("x + %d = %p \n",i+1 ,(xint+i));//valores aumentando de 2 em 2 bytes
  }
  printf("\n");
  printf("Valores em float:\n");
  for(int i=0;i<4;i++){
  printf("x + %d = %p \n",i+1 ,(xfloat+i));//valores aumentando de 4 em 4 bytes
  }
  printf("\n");
  printf("Valores em double:\n");
  for(int i=0;i<4;i++){
  printf("x + %d = %p \n",i+1 ,(xdouble+i));//valores aumentando de 8 em 8 bytes
  }
}