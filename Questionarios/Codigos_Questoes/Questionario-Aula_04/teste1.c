//teste1.c

//exercicio2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
	
	FILE *fp;
	char string[100];
	int i, j;
	fp = fopen("arquivo_exercicio2.txt", "w");
	if(!fp)
	{
	
	/* Arquivo ASCII, para escrita */
	printf("Erro na abertura do arquivo");
	exit(0);  }
	printf("Digite o seu nome: ");
	gets(string);

	for(i=0; string[i]; i++)
	{
		putc(string[i], fp);
	}


	
	printf("\n\n");
	printf("Digite a sua idade: ");
	gets(string);
	printf("Idade: ");
	for(j=0; string[j]; j++)
	{

		putc(string[j], fp);
	}
	
	printf("Nome: %c", string[i]);

	fclose (fp);
	return 0;
}


