#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"portuguese");
    int vezes, x, idade, maior, soma;
    float media= 0;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &x);

    for(vezes = 1; vezes <= x; vezes++){

    printf("Aqui, digite sua idade: ");
    scanf("%d", &idade);

    if(18 < idade)
        maior++;
            soma += idade;
    }
    media = soma/x;
    printf("N�mero de maiores de idade �: %d\nE a m�dia �: %.2f\n\npercentual = (pos/vezes)*100;", maior, media);
    return 0;
}
