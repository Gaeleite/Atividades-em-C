#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
int dias, anos, final,final2;
printf("Indique quantos cigarros você fuma por dia: ");
scanf("%d",&dias);
printf("Agora indique há quantos anos você fuma: ");
scanf("%d",&anos);
final = (dias*anos*7)/60;
final2 = final/24;
printf("Você perdeu um total de %d dias", final2);
return 0;
}
