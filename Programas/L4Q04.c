#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main () {
        setlocale(LC_ALL,"portuguese");
        int days_car;
        float km_days, final_money;
		printf ("---CALCULADORA DE QUANTO PAGARÁ PELO CARRO(baseado nos dias e km rodados)---\nDigite os dias rodados com o carro: ");
		scanf ("%d",&days_car);
		printf ("digite o numero de quilometros rodados: ");
		scanf ("%f",&km_days);
		final_money = days_car*60 + 0.15*km_days;
		printf ("o total a ser pago e: %.2f",final_money);

}
