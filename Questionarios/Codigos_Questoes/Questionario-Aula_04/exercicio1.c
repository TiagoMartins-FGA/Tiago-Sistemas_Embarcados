//exercicio1.c
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char *argv[]) {
	
	FILE *fp;
	char string[100];
	int i;
	fp = fopen("arquivo.txt", "w");
	if(!fp)
	{
	
	/* Arquivo ASCII, para escrita */
	printf("Erro na abertura do arquivo");
	exit(0);  }
	printf("Digite o seu nome: ");
	gets(string);
	for(i=0; string[i]; i++)
		putc(string[i], fp);
	
	printf("\n\n");
	printf("Digite a sua idade: ");
	
	fclose (fp);
	return 0;
}

