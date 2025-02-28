#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int n, idade, pessoa=0;
printf("Digite a sua idade: ");
for(n = 1; n<10;n++){
scanf("%d", &idade);
if (idade>=18){pessoa++;};}
printf("o número de pessoas maiores de idade é %d", pessoa);
return 0;}

