#include <stdio.h>

int main() {
    int vetor[5];
    int temp;
    
    // Entrada dos números
    for (int pos = 0; pos < 5; pos++) {
        printf("Digite um número inteiro [%d / 5]:" , pos + 1);
        scanf("%d", &vetor[pos]); /*lê o número de %d em cont e coloca 
        dentro do vetor*/
    }

    for(int pos = 0;pos < 4;pos++){
        if(vetor[pos] > vetor[pos+1]){
            int temp = vetor[pos];
            vetor[pos] = vetor[pos+1];
            vetor[pos+1] = temp;
            pos = -1;
        }
    }    
    

   
            
        
    

    // Saída formatada com vírgulas
    printf("\nVetor em ordem crescente:\n");
    for (int pos = 0; pos < 5; pos++) {
        printf("%d", vetor[pos]);
        if (pos < 4)
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}
