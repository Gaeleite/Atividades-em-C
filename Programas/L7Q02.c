#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int d(){

    float x1, x2, y1, y2, distanciaX, distanciaY;

    scanf("%f",&x1);
    printf("\no x2:");
    scanf("%f",&x2);
    printf("\no y1:");
    scanf("%f",&y1);
    printf("\no y2:");
    scanf("%f",&y2);

    distanciaX = x2 - x1;
    distanciaY = y2 - y1;

    printf("\nA dist�ncia dos pontos informados � {%.2f;%.2f}", distanciaX, distanciaY);
    return d;
}
    int main (){

    setlocale(LC_ALL,"portuguese");

    printf("---CALCULE A DIST�NCIA DE DOIS PONTOS---\nPara se calcular uma dist�ncia de dois pontos, faz-se a dist�ncia final(x2,y2) menos a inicial(x1,y1)\nPor�m esse programa otimiza tal processo, informe\n\no x1:");

    d();
}
