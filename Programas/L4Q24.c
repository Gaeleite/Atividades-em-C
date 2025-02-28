#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "portuguese");

int vezes,i, parar=0,soma=0, pos=0,neg=0;
float media, porcent;

while(parar=1){

printf("Digite a quantidade de valores a serem recebidos: ");
scanf("%i", &vezes);

if(vezes>0){

for(i=0;i<vezes;i++){

printf("Digite o valor: ");
scanf("%d", &i);
soma += i;

if(i>=0){pos++;}

else{neg++;}}

media = soma/vezes;
porcent = (pos/vezes)*100;

printf("a média é igual à: %f",media);
printf("\nOs positivos é igual à: %i",pos);
printf("\nOs negativos é igual à: %i", neg);
printf("\nO percentual de positivos é igual à: %f %",porcent);
printf("\nO percentual de negativos é igual à: %f %",100-porcent);

}else{parar++;}}

return 0;}
