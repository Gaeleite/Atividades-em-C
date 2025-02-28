#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "portuguese");
int nota=0, cand=1, venc=0;
char nome,venck;
printf("---COMPETIÇÃO MISS IFMA, NOME E NOTA---\n\n");

for (cand=1;cand<=3;cand++){

printf("digite o primeiro nome e nota da candidata: ");
scanf("%c %d",&nome, &nota);
fflush(stdin);

if (venc<nota){
    venc=nota;
    venck=nome;
}
getchar;}
printf("\nE A VENCEDORA É %c com nota de %d", venck, venc);

return 0;}
