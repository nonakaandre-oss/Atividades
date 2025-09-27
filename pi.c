#include <stdio.h>
int main(){

int num[2];

printf("Digite um número inteiro:");
scanf("%d", &num[0]);

printf("Digite outro número inteiro:");
scanf("%d", &num[1]);

for(int i=0; i <2; i++){
    if(num[i] % 2 == 0) {
    printf("O número %d é par\n", num[i]);
}  else {
    printf("O número %d é impar\n", num[i]);
}
}
    return 0;
}