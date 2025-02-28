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
    printf("Número de maiores de idade é: %d\nE a média é: %.2f\n\npercentual = (pos/vezes)*100;", maior, media);
    return 0;
}
