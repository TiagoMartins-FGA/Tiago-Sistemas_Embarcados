#include <stdio.h>
#include <stdlib.h>
int main()
{
  char nome[7][10]; // acho que 7 char é um tanto bom pra um nome...  e são 10 nomes
  int cont = 0;
  while(cont < 10)
  {
    printf("Entre com o nome: ");
    scanf("%s", &nome[cont]);
    cont++;
  }
  for (cont=0;cont<10;cont++)
  {
      printf("%s",&nome[cont]);
  }
  system("PAUSE");
  return 0;
}
