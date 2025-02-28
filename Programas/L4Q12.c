#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
        setlocale(LC_ALL,"portuguese");
	    float num1, numfinal;
		printf("---QUENTE OU FRIO?---\nEscreva a temperatura atual: ");
		scanf("%f",& num1);
		  if(num1<=15){printf("Está muito frio.\n");}
		  else if(num1>15 && num1<=23){printf("Está frio.\n");}
		  else if(num1>23 && num1<=26){printf("Está agradável.\n");}
		  else if(num1>26 && num1<=30){printf("Está quente.\n");}
		  else if(num1>30){printf("Está muito quente.\n");}
		  return 0;}
