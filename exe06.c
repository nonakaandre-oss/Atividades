#include <stdio.h>
int main (){
    int numero[10];

    for(int i=0;i<10;i++){

        printf("digite o numero %d\n", i);
        scanf("%d", &numero[i]);
    }
    for(int i=0;i<10;i++){
  
       if (numero[i] % 2 == 0)
        printf("numeros pares são %d\n", numero[i]);
    }

    return 0;
}

// 