#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
int n,numb, numero;
printf("Indique um número para descobrir a sua tabuada: ");
scanf("%d",&numb);
for(n=1;n<=10;n++){
numero = numb*n;
printf("%d\n", numero);
}
return 0;}
