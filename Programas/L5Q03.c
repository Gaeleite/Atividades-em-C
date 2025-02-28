#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int v[10], y=10,z=0,i=0;

for(y=10; y>=0; y--){

printf("DIGITE O %d VALOR: ",y);
scanf("%d", &v[i]);
if (v[i]%2==0){
    z++;
}
}
printf("\n%d\n", z);
return 0;}
