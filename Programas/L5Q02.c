#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL, "portuguese");
int x;
printf("DIGITE UM N�MERO PARA INDICAR A SUA ORDEM INVERSA AT� 0: ");
scanf("%d",&x);
for(x;x>=0; x--){
    printf("%d \n",x);
}
return 0;
}
