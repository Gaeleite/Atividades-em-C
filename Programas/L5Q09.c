#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
setlocale(LC_ALL, "portuguese");
int matrix[3][3];
int i, j, soma=0;
for(i=0;i<=2;i++){
    for(j=0;j<=2;j++){
    printf("Escreva o valor da linha %d da coluna %d: ",i+1,j+1);
    scanf("%d",&matrix[i][j]);
    if (i==j){soma+=matrix[i][j];}}}
    printf("\nA SOMA DA DIAGONAL PRINCIPAL É %d\n", soma);
    return 0;}
