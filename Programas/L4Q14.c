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
 if (imc<18.5){printf("\nVocê está abaixo do peso");}
 else if (18.5<imc<25){printf("\nVocê está com o peso normal");}
 else if (25<imc<30){printf("\nVocê está acima do peso");}
 else if (30>imc){printf("\nVocê está obeso");}
return 0;
}
