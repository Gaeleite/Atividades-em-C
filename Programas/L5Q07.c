#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int j, i, vezes=0;
int matriz[4][4];
    for(int i=0; i<4; i++){for(int j=0; j<4; j++){
        printf("Escreva o valor da linha %d da coluna %d: ",i+1,j+1);
        scanf("%d", &matriz[i][j]);
        if(matriz[i][j]>10)
        vezes++;
        }
    }

printf("\nNo total, existem %d vezes em que o número foi maior que 10 na matriz.\n", vezes);
return 0;}
