#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"



int tam_arq_texto(char *nome_arquivo)
{

	int i = 0;
	char c;
	FILE *fp;

	fp = fopen(nome_arquivo,"r"); 
	while((c = getc(fp) ) != EOF)
	{ 
		i = i++;
	}

	fclose(fp);
    	return (i);
 }
