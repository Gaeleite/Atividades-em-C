#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
int pedido;

        printf("O card�pio de hoje � o seguinte: \nLasanha = 1 \nFeijoada = 2 \nChurrasco = 3\nGalinha Caipira = 4 \n\n");
		printf("Digite o c�digo do pedido que deseja do card�pio para saber quanto ir� gastar: ");
		scanf("%d",&pedido);
		if (pedido==1){
		printf("\nent�o voc� deseja Lasanha que custa R$15.00\n");}
		else if (pedido==2){
		printf("\nent�o voc� deseja Feijoada que custa R$17.00\n");}
		else if (pedido==3){
		printf("\nent�o voc� deseja Churrasco que custa R$20.00\n");}
		else if (pedido==4){
		printf("\nent�o voc� deseja Galinha caipira que custa R$13.00\n");}
		else{
        printf("\nC�digo inv�lido\n");}
return 0;
		}
