#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
    float media;
    int nota1, nota2, nota3;
    char M=1;
    printf("----------CALCULADOR DE M�DIA E DE M�DIA PONDERADA----------\nCalcule sua m�dia aqui, no discovery channel, a partir dos dados que informares, sendo A para a m�dia aritm�tica e P para a m�dia ponderada\n");

    printf("COLOQUE SUA NOTA 1\n");
    scanf("%d",&nota1);
    printf("COLOQUE SUA NOTA 2\n");
    scanf("%d",&nota2);
    printf("COLOQUE SUA NOTA 3\n");
    scanf("%d",&nota3);
    printf("AGORA INDIQUE QUAL MEDIA VOC� QUER RECEBER(ponderada, P, aritm�tica, A)\n");
    scanf("%c",&M);


    if (M=='P'){
    media = (nota1 + nota2 + nota3)/3;
    }else{
    media = (nota1*5 + nota2*3 + nota3*2)/3;
    }
 printf("%.0f", media);
}

