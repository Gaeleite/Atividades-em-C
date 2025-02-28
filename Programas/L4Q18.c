#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
float marc=1.50, luc=1.10;
int anos=0;
while(marc>luc){
marc = marc+0.02;
luc = luc+0.03;
anos++;}
printf("\nEm %d anos, Lucas será maior do que o Marcos\n", anos);
return 0;}
