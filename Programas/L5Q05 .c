#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int  temp[10], i, inicial,y;
for(y=0; y<=10; y++){

printf("DIGITE A %d TEMPERATURA EM FAREINHEIT: ",y);
scanf("%d", &inicial);
temp[y]=(inicial*5-32*5)/9;}

for(y=0; y<=10; y++){
    printf("\n EM CELSIUS, FICARIA %d", temp[y]);

}

return 0;}
