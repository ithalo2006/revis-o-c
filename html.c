#include <stdio.h>

int main() {

    float nota;
    int frequencia;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("Digite a frequencia do aluno: ");
    scanf("%d", &frequencia);

    if(nota >= 7 && frequencia >= 75){
        printf("Aluno aprovado\n");
    }else{
        printf("Aluno reprovado\n");
    }

    return 0;
}