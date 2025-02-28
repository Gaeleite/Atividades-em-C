#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");

int pos=10, x=0,y;
int vetor[10];

for(pos=10;pos>=0;pos--){
printf("Digite um valor, caso seja negativo, será igual a zero: ");
scanf("%d",  &vetor[pos]);

if (vetor[pos]<=0){
    x++;
    vetor[pos]=0;
}}

for(x=10,y=10;x>=0;x--,y--){
printf("O %d foi %d \n", x,vetor[y]);
}return 0;}
