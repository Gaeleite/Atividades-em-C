#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int n;
for(n = 1; n<=50;n++)
printf("%d ",n);
return 0;}
