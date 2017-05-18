#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main (int argc, const char *argv[]){
   
        FILE *fp;
        char str1[1000], str2[1000], str3[1000], str4[1000];
        int i, j;

        fp = fopen("arquivo2.txt", "w");

            printf("Nome: %s \nIdade: %s anos\n", argv[1], argv[2] );

        fclose (fp);
        return(0);
}
 
