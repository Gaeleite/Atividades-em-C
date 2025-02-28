#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
        float mario_days, salario_mario; // sim, coloquei o nome do encanador de Mario, me deixa :D //
        setlocale(LC_ALL,"portuguese");
		printf("---QUANTO PAGARÁ AO ENCANADOR?---\nEscreva o numero de dias em que encanador trabalhou: ");
		scanf("%f",&mario_days);
		salario_mario = mario_days*20 - mario_days*1.6;
		printf("esse e o salario do encanador: %.0f\n",salario_mario);
}
