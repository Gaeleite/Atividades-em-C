#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int matrix[5][3];
int vezes=0, i, j, maior=0,x=0,y=021;
for(i=0;i<=2;i++){
    for(j=0;j<=4;j++){
        printf("Escreva o valor da linha %d da coluna %d: ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
        if (maior<=matrix[i][j]){
            maior=matrix[i][j];
            x=i;
            y=j;
        }
    }
}
printf("\nO maior valor é %d da matriz(%d, %d)\n",maior,x+1,y+1);
return 0;
}
