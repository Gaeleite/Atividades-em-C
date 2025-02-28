#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Menor (){
     int i1,i2;

     scanf("%d",&i1);
     scanf("%d",&i2);

     if (i1<i2){printf("%d", i1);}

     if (i1>i2){printf("%d", i2);}

}
int main () {

 setlocale(LC_ALL,"portuguese");
 int i1, i2;

 printf("OLÁ MUNDO, escreva dois valores inteiros para descobrir qual deles é o menor:\n");

 Menor();
}
