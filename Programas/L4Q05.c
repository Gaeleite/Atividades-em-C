#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
        setlocale(LC_ALL,"portuguese");
 		float altura, raio, volume;
		printf ("---VOLUME DO CILI�NDRO---\n\nInsira a altura do cil�ndro: ");
		scanf ("%f", &altura);
		printf ("Agora, insira o raio do cilindro: ");
		scanf ("%f", &raio);
		volume = raio*raio*altura*3.14;
		printf ("este � o seu volume final: %.0f\n",volume);
		return 0;}
