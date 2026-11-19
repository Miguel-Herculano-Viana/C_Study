#include <stdio.h>

int main(void){
    double nota1 = 0;
    double nota2 = 0;
    double nota3 = 0;
    double reprovado = 0;
    double media = 0.00;

    printf("Boletim Interativo\n");

    printf("Insira a primeira nota: ");
    if(scanf(" %lf", &nota1) != 1){
        printf("Entrada invalida");
        return 1;
    }
    if(nota1 < 0 || nota1 > 10){
        printf("Nota fora do range (0 - 10)");
        return 1;
    }

    printf("Insira a segunda nota: ");
    if(scanf(" %lf", &nota2) != 1){
        printf("Entrada invalida");
        return 1;
    }
    if(nota2 < 0 || nota2 > 10){
        printf("Nota fora do range (0 - 10)");
        return 1;
    }

    printf("Insira a terceira nota: ");
    if(scanf(" %lf", &nota3) != 1){
        printf("Entrada invalida");
        return 1;
    }
    if(nota3 < 0 || nota3 > 10){
        printf("Nota fora do range (0 - 10)");
        return 1;
    }

    media = (nota1 + nota2 + nota3) / 3;

    if(reprovado == 1){
        printf("Reprovado por nota");
    }else if(media >= 9){
        printf("Sua nota foi A, com uma media de %.2f", media);
    }else if(media >= 7){
        printf("Sua nota foi B, com uma media de %.2f", media);
    }else if(media >= 6){
        printf("Sua nota foi C, com uma media de %.2f", media);
    }else{
        printf("Reprovado por media abaixo da media (menor que 6)");
    }
    return 0;
}