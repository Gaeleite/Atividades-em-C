#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int matrix[10][3];
int i,j, alunos1=0, alunos2=0, alunos3=0, maior=100;
for(i=0;i<10;i++){for(j=0;j<3;j++){
    printf("Digite a nota do %dº aluno do %dº prova: ", i+1, j+1);
    scanf("%d", &matrix[i][j]);

}if (j>=1){
if (matrix[i][0]<=matrix[i][1] && matrix[i][0]<=matrix[i][2]){alunos1++;}
else if (matrix[i][1]<=matrix[i][2] && matrix[i][1]<=matrix[i][0]){alunos2++;}
else if (matrix[i][2]<=matrix[i][0] && matrix[i][2]<=matrix[i][1]){alunos3++;}
}}


printf("\n1º prova foi %d\n2º prova foi %d\n3º prova foi %d.\n", alunos1, alunos2, alunos3);
return 0;}
