#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int n, vezes;
while (vezes!=1){
printf("Digite um número de 1 a 10, se errar, loopará: ");
scanf("%d", &n);
if (n<=10 && n>0){
    vezes++;
}
}
return 0;}
