#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int numero, vezes, neg=0;
while(vezes!=10){
    printf("\nDigite um valor: ");
    scanf("%d",&numero);
    vezes++;
    if (numero<=0){neg++;}
    else {}}
    printf("\nO total de número negativos foram %d", neg);
return 0;}
