//exercicio2.c
//Teste2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {
	
	FILE *fp;
	char str1[100],str2[100], str3[100], str4[100], str5[1000];
	int i, j;
	
	fp = fopen ("arquivo2.txt", "w");
		printf ("Digite seu nome: ");
		gets (str1);
		printf ("Digite sua idade: ");
		gets (str3);

		strcpy (str2,"Nome: ");//str2 armazena a palavra "Nome: "
		strcat (str2,str1);	// str2 concatena caracteres de str1

		/*loop para pegar o que foi digitado
		 e escrever no arquivo o "Nome: nome_digitado"*/
		for(i=0; str2[i]; i++){
			putc(str2[i], fp);
		}	
		strcpy (str4,"\nIdade: "); //str4 armazena a palavra "Idade: "
		strcat (str4,str3); //str4 concatena str4 e str3, nessa ordem


		/*loop para pegar o que foi digitado
		 e escrever no arquivo a "Idade: idade_digitda"*/
		for(j=0; str4[j]; j++){
			putc(str4[j], fp);
		}

		strcpy (str5, " anos");
		/*loop para pegar o que foi digitado
		 e escrever no arquivo o a string "anos" */
		for (int i = 0; str5[i]; i++){
			putc (str5[i], fp);
				}

	putc('\n', fp);

	fclose(fp);
	return(0);
}