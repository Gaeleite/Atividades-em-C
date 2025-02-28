#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
   setlocale(LC_ALL,"portuguese");
   float inicial, final;
   int cliente;
   printf("---PROMOÇÃO EM DESTAQUE---\n\n");
   while (cliente!=21){
   printf("Caso tenha as condições especiais, terá um desconto MARAVILHOSO.\n\nDigite o valor que você compraria seus produtos: ");
   scanf("%f",&inicial);
   cliente++;
   if (cliente<=10 && inicial<=500){
   final = inicial-(inicial/10);
   printf("você receberá 10 por cento de desconto e pagará %.2f\n\n",final);}
   else if (cliente<=10 && inicial>501){
   final = inicial-(inicial/4);
   printf("você receberá 25 por cento de desconto e pagará %.2f\n\n",final);}
   else if (cliente>10 && inicial<=600){
   final = inicial - (inicial/20);
   printf("você receberá 5 por cento de desconto e pagará %.2f\n\n",final);}
   else if (cliente>10 && inicial>600){
   final = inicial - (inicial*0,15);
   printf("você receberá 15 por cento de desconto e pagará %.2f\n\n",final);}}
   return 0;}
