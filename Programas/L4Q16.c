#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
int pedido;

        printf("O cardápio de hoje é o seguinte: \nLasanha = 1 \nFeijoada = 2 \nChurrasco = 3\nGalinha Caipira = 4 \n\n");
		printf("Digite o código do pedido que deseja do cardápio para saber quanto irá gastar: ");
		scanf("%d",&pedido);
		if (pedido==1){
		printf("\nentão você deseja Lasanha que custa R$15.00\n");}
		else if (pedido==2){
		printf("\nentão você deseja Feijoada que custa R$17.00\n");}
		else if (pedido==3){
		printf("\nentão você deseja Churrasco que custa R$20.00\n");}
		else if (pedido==4){
		printf("\nentão você deseja Galinha caipira que custa R$13.00\n");}
		else{
        printf("\nCódigo inválido\n");}
return 0;
		}
