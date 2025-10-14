#include <stdio.h>

int main(){

   int vetor[6];

   for(int cont = 0;cont < 6;cont++){

    printf("Digite um número inteiro[%d / 6]:", cont + 1); // cont+1 usar o primeiro número do vetor como referencia e adiciona 1 para apresentação.
    scanf("%d", &vetor[cont]); //Pega o número digitado em cont e adiciona a uma posição no vetor.
   }

   for(int cont = 0;cont < 6;cont++) { 
      printf("\n%d", vetor[5-cont]);   //Aqui o número 5 é subtraido do vetor e apresenta o número dentro do vetor. 
   }
/* for(int cont = 0;cont < 6;cont--) {  
 printf("\n%d", vetor[cont]);
}  */
   printf("\n");  


    return 0;
}