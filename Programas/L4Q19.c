#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
float altura, maior=0, menor=2;
int pessoa,pessoalta,pessoabaixa;
printf("---DESCUBRA A MAIOR ALTURA DENTRE VOC�S 10---\n\n");
while(pessoa!=10){
printf("Escreva sua altura: ");
scanf("%f",&altura);
pessoa++;
if (altura>maior){
        maior=altura;
        pessoalta=pessoa;
}
if (altura<menor);{
    menor=altura;
    pessoabaixa=pessoa;
        }}
        printf("A menor altura � %.2f sendo da %d e a maior altura � da %.2f sendo da %d",menor,pessoabaixa,maior,pessoalta);
        return 0;}
