#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
main () {
        setlocale(LC_ALL,"portuguese");
		float num1, numfinal;
		printf("---QUANTO TEM QUE VENDER ESSE PRODUTO?---\n\nEscreva o valor que compraste: ");
		scanf("%f",& num1);
		 if (num1<20)
		 {numfinal = num1*1.45;}
		 else{numfinal = num1*1.3;}
		printf("terás que vendes em valor de %.0f\n", numfinal);
		return 0;}
