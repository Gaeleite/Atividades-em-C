#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
        setlocale(LC_ALL,"portuguese");
		int num1, numfinal;
		printf("---DOBRO SE POSITIVO, TRIPLO SE NEGATIVO---\n\nEscreva um número: ");
		scanf("%d",& num1);
        if (num1>0){numfinal = num1*2;}
        else{numfinal = num1*3;}
		printf("Logo, o resultado desse número seria: %d\n", numfinal);
		return 0;}
