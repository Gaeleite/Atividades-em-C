#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
main () {
        setlocale(LC_ALL,"portuguese");
        float m5, m10, m25, m50, r1, total;
		printf ("---QUANTAS DE DINHEIRO NO TOTAL VOCÊ TEM?---\n\nInforme o número de moedas de 5 centavos: ");
		scanf ("%f",&m5);
		printf ("informe o número de moedas de 10 centavos: ");
		scanf ("%f",&m10);
		printf ("informe o número de moedas de 25 centavos: ");
		scanf ("%f",&m25);
		printf ("informe o número de moedas de 50 centavos: ");
		scanf ("%f",&m50);
		printf ("informe o número de moedas de 1 real: ");
		scanf ("%f",&r1);
		total = m5*0.05 + m10*0.10 + m25*0.25 + m50*0.5 + r1;
		printf ("Esse é o total de dinheiro que você tem: %.2f",total);
		return 0;}
