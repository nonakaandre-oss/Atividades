#include <stdio.h>

int main() {
    int vetor[5];
    int temp;
    
    // Entrada dos números
    for (int cont = 0; cont < 5; cont++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[cont]); /*lê o número de %d em cont e coloca 
        dentro do vetor*/
    }
    
    

   
            
        
    

    // Saída formatada com vírgulas
    printf("\nVetor em ordem crescente:\n");
    for (int cont = 0; cont < 5; cont++) {
        printf("%d", vetor[cont]);
        if (cont < 4)
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}
