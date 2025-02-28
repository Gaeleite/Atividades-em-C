#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");
int numb;
for(numb=101;numb<=200;numb=numb+2){
printf("%d\n", numb);}
getch();
return 0;
}
