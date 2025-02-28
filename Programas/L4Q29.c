#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int n;
for(n = 1000; n<=2000;n=n+2)
printf(" %d ",n);
return 0;}

