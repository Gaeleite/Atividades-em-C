#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int fatorial, vezes;
printf("---CALCULADOR DE FATORIAL---\n\nInsira um valor para calcular: ");
scanf("%d", &vezes);
for(fatorial = 1; vezes > 1; vezes = vezes - 1)
fatorial = fatorial * vezes;
printf("\nResultado: %d", fatorial);
return 0;}
