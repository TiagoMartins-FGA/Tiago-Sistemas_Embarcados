#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main (int argc, const char *argv[]){
   
        FILE *fp;
        int i, j;

        fp = fopen("arquivo2.txt", "w"); //Criar arquivo
        	/*Vai pegar o que eu escrever no endereço do 
        vetor argv[1] e argv[2] e vai imprimir na tela nome e idade*/ 
            printf("Nome: %s \nIdade: %s anos\n", argv[1], argv[2] );

        fclose (fp);
        return(0);
}
 
