#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"portuguese");
int n;
for(n = 50; n>=0;n=n-1)
printf("%d ",n);
return 0;}
