//Teste2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
	
	FILE *fp;
	char str1[100],str2[100], str3[100], str4[100];
	int i, j;
	
	fp = fopen("arquivo2.txt", "w");
		printf ("Digite seu nome: ");
		gets (str1);
		printf ("Digite sua idade: ");
		gets (str3);
		strcpy (str2,"Nome: ");
		strcat (str2,str1);	// str2 armazena caracteres de str1
		//printf ("\n\n%s\n\n",str2);

	for(i=0; str2[i]; i++){

		putc(str2[i], fp);
	}


	
	strcpy (str4,"\nIdade: ");
	strcat (str4,str3);
	//printf ("\n\n%s\n\n",str4);

	for(j=0; str4[j]; j++){

		putc(str4[j], fp);
	}
	putc('\n', fp);

	fclose(fp);
	return(0);
}