#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
        float valor_celsius, valor_fahrenheit;
        setlocale(LC_ALL,"portuguese");
		printf("---CONVERSOR DE CELSIUS A FAHRENHEIT---\nValor em celsius que sera convertidos em fahrenheit:\n");
		scanf("%f",&valor_celsius);
		valor_fahrenheit = valor_celsius*1.8 + 32;
		printf("Este e o valor em celsius caso transformado em fahrenheit:\n%.0f\n",valor_fahrenheit);
		return 0;}
