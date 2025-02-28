#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    float valor_metros, valor_milimetros;
    setlocale(LC_ALL,"portuguese");
    printf ("---CONVERSOR DE METROS EM MILIMETROS---\ndigite aqui o valor em metros que serão convertidos em milímetros:\n");
    scanf("%f",&valor_metros);
    valor_milimetros = valor_metros*1000;
    printf("este é o valor em milimetros: %.0f\n",valor_milimetros);
    return 0;}
