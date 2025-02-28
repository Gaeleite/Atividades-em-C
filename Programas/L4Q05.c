#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
        setlocale(LC_ALL,"portuguese");
 		float altura, raio, volume;
		printf ("---VOLUME DO CILIÍNDRO---\n\nInsira a altura do cilíndro: ");
		scanf ("%f", &altura);
		printf ("Agora, insira o raio do cilindro: ");
		scanf ("%f", &raio);
		volume = raio*raio*altura*3.14;
		printf ("este é o seu volume final: %.0f\n",volume);
		return 0;}
