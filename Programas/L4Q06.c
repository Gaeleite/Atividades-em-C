#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
        setlocale(LC_ALL, "portuguese");
        float final_money, kwh, salarioE;
		printf ("---CALCULADOR DE PORCENTAGEM---\n\nSeu consumo, por favor: ");
		scanf ("%f",&kwh);
		printf ("agora o seu sal�rio tamb�m: ");
		scanf ("%f",&salarioE);
		final_money = (0.78*kwh)/salarioE;
		final_money = final_money*100;
		printf ("Rico, ent�o essa � a porcentagem do teu sal�rio que ir� para a conta de luz: %.0f por cento.\n", final_money);
		return 0;}
