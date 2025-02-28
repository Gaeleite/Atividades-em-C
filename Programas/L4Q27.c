#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"portuguese");

int idade,menorI=999,maiorIA=0, maiorID=0, x, a, b, c, d, e, nota, client,clieD, soma, somaNOTA, pocentE, mediaD;

for(client=1;client=3;client++){

printf ("Informe sua idade:");
scanf("%d",&idade);

printf("\nInforme a nota baseada na tela abaixo:\nA. Ótimo\nB. Bom\nC. Regular\nD. Ruim\nF. Péssimo\n\n");
scanf("%d",&nota);

somaNOTA++;

if (nota = 'A'){
        a++;
        if (maiorIA<idade)
            maiorIA=idade;
}

else if (nota = 'D'){
    soma+=idade;
    clieD++;
    if (maiorID<idade){
        maiorID=idade;
    }
}

else if (nota = 'E'){
    e++;
    if (idade<menorI){menorI=idade;}
}

else{printf("\nLETRA INCORRETA\n\n");}
fflush(stdin);
}

mediaD=soma/clieD;
pocentE=(e/somaNOTA)*100;

printf("1. A quantidade de respostas A (Ótimo): %d\n 2. A média de idade das pessoas que responderam D (Ruim):%d\n 3. A percentagem de respostas E (Péssimo) e a menor idade de quem informou esta resposta: %d e %d \n4. A maior idade de quem respondeu A (Ótimo) e a maior idade de quem respondeu D(Ruim): %d e %d", a, mediaD, pocentE, menorI, maiorID, maiorIA);
return 0;}
