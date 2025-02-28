#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
main () {
        setlocale(LC_ALL,"portuguese");
        int num1;
		printf("Escreva um número: ");
		scanf("%d",&num1);
		printf("Este %d é: ",num1);
		if (num1%2==0) {printf("par");}
		else {printf("impar");}
		return 0;}
