#include <stdio.h>
int main (){

    int nota[3];

    for(int i=0;i<3;i++){
    printf("Digite a nota do aluno:");
    scanf("%d", &nota[i]);
    }

    for(int i=0;i<3;i++){
        if(nota[i] >=7){
            printf("Aprovado\n");
        }
        else if(nota[i] < 5){
            printf("Reprovado\n");
        }
        else {
            printf("recuperação\n");
        }

    }

    return 0;
}
// float notas[3];
// float media;

//   for(int pos = 0; pos<3; pos++);
//   printf("digite uma nota:");
//   scanf("%f", &notas[pos]);

// for(int i=0; i<3; i++){
// soma += soma + notas[pos];

//media = soma / 3;

// printf ("A media das notas é:%f\n", media);

// Começa o if a partir daqui.
