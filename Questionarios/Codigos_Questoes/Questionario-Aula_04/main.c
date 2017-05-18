#include <stdio.h>
#include <stdlib.h>
#include "bib_arqs.h"

int main(int argc, char *argv[]){
       
	int c;
	

	c = tam_arq_texto(argv[1]);
       	printf("   %d \n", c);	
	
    	return (0);
   }
