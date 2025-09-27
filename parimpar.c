#include <stdio.h>
int main (){

    int num1, num2, dividir ;
   
    printf("Digite um número inteiro:");
    scanf("%d", &num1);
    
    printf("Digite outro número inteiro:");
    scanf("%d", &num2);

    if((num1 + num2) % 2 == 0){
        printf("par%\n");
    } else {
    printf("impar\n");
    }
    
    return 0;
}