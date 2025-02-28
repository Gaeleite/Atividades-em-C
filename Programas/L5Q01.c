#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");

int pos, v[5]={10,20,30,40,50};

for(pos=0;pos<5; pos++){
    printf("\n%d \n",v[pos]);
}
return 0;
}
