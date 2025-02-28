#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
   setlocale(LC_ALL,"portuguese");
   int Votos=7,Cand1=0,Cand2=0,Cand3=0,Cand4=0,nulo=0, branco=0;

   printf("---GLÓRIA A DEMOCRACIA IRMÃOS, IREMOS AGORA VOTAR----\n\nCaso queira o candidato 1, vote 1\nCaso queira o candidato 2, vote 2\nCaso queira o candidato 3, vote 3\nCaso queira o candidato 4, vote 4\nNulos são 5, Brancos são 6\n\nVote no candidato baseado no número sugerido: ");

   while(Votos!=0){
   scanf("%d",&Votos);
   if(Votos==1){Cand1++;}
   else if(Votos==2){Cand2++;}
   else if(Votos==3){Cand3++;}
   else if(Votos==4){Cand4++;}
   else if(Votos==5){nulo++;}
   else if(Votos==6){branco++;}}

   printf("e a votação final foi:\nCandidato 1:%i\nCandidato 2:%i\nCandidato 3:%i\nCandidato 4:%i\nOs nulos:%ieos brancos", Cand1, Cand2, Cand3, Cand4, nulo);
    return 0;}
