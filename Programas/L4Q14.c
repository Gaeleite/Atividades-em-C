#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    int peso;
    float altura, imc;
setlocale(LC_ALL,"portuguese");
 printf("---INDICADOR DE IMC---\n\nIndique seu peso: ");
 scanf("%d",&peso);
 printf("Indique sua altura: ");
 scanf("%f",&altura);
 imc = peso/(altura*altura);
 if (imc<18.5){printf("\nVoc� est� abaixo do peso");}
 else if (18.5<imc<25){printf("\nVoc� est� com o peso normal");}
 else if (25<imc<30){printf("\nVoc� est� acima do peso");}
 else if (30>imc){printf("\nVoc� est� obeso");}
return 0;
}
