#include <stdio.h>

int main(){
   int numero[10];  
   int busca, contador = 0; 

   for(int cont = 0;cont < 10;cont++){

    printf("Digite um número inteiro[%d / 10]:", cont + 1);
    scanf("%d", &numero[cont]);
 }

    printf("\nDigite o número que será buscado:");
    scanf("%d", &busca);         //Guarda o número digitado no int"buscar"

    for(int cont = 0;cont < 10;cont++){
        if(numero[cont] == busca){  //Se dentro do vetor houver um número igual (==) o digitado em 'busca' 
            contador++;             // Adiciona 1 em 'contador
        }
    }

    printf("\nO número %d tem %d ocorrencias no vetor.\n", busca, contador);
    return 0;
}
