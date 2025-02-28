#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
main (){
    setlocale(LC_ALL,"portuguese");
          float altura, pesoideal;
          char sexo;
          printf("---DESCUBRA SEU PESO IDEAL AQUI---\n\nPrimeiro escreva seu sexo(com a primeira letra, m para masculino e f para feminino) e sua altura\n");
          scanf("%c %f", &sexo, &altura);
          if (sexo=='m'||sexo=='M'){pesoideal = (altura*72.1 - 58);
          printf("\nSeu peso ideal é igual a %.0f\n", pesoideal);}
          else if(sexo=='f'||sexo=='F'){pesoideal = (62.1*altura - 44.7);
          printf("\nSeu peso ideal é igual a %.0f\n", pesoideal);}
          else { printf("LETRA INCORRETA\n");}
          return 0;}
