#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  double op1, op2;
  char operador;
  printf("Entre com (i)operando (ii)operacao (iii)operando\n");
  while(scanf("%Le %c %Le", &op1, &operador, &op2)==3){
    switch(operador){
      case '+': printf("%g\n", op1+op2); break;
      case '-': printf("%g\n", op1-op2); break;
      case '*': printf("%g\n", op1*op2); break;
      case '/': printf("%g\n", op1/op2); break;
      default: printf("operador invalido!\n");
    }
    printf("Entre com (i)operando (ii)operacao (iii)operando\n");
  }   
  system("PAUSE");     
  return 0;
}
