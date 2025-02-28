#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
        setlocale(LC_ALL,"portuguese");
        int gb, mb;
		printf ("---CONVERSOR DE GIGABYTE EM MEGABYTE---\n\nInsira o numero de gbs: ");
		scanf ("%d",&gb);
		mb = gb*1024;
		printf ("Esse é o número de mb dos gbs informados: %d \n",mb);
		return 0;}
