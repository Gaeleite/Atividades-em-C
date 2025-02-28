#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    float media;
    int nota1, nota2, nota3;
    char M=1;
    printf("----------CALCULADOR DE MÉDIA E DE MÉDIA PONDERADA----------\nCalcule sua média aqui, no discovery channel, a partir dos dados que informares, sendo A para a média aritmética e P para a média ponderada\n");

    printf("COLOQUE SUA NOTA 1\n");
    scanf("%d",&nota1);
    printf("COLOQUE SUA NOTA 2\n");
    scanf("%d",&nota2);
    printf("COLOQUE SUA NOTA 3\n");
    scanf("%d",&nota3);
    printf("AGORA INDIQUE QUAL MEDIA VOCÊ QUER RECEBER(ponderada, P, aritmética, A)\n");
    scanf("%c",&M);


    if (M=='P'){
    media = (nota1 + nota2 + nota3)/3;
    }else{
    media = (nota1*5 + nota2*3 + nota3*2)/3;
    }
 printf("%.0f", media);
}

