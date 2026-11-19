#include <stdio.h>
#include <stdbool.h>

int main(void){
    //Inteiro
    int n = -7;
    printf("Multiplo de 3 E 5? %d\n", n % 3 == 0 && n % 5 == 0);
    printf("Entre 10 e 20? %d\n\n", n >= 10 && n <= 20);
    printf("N e par? %d\n", n % 2 == 0);

    //media de notas
    double nota1 = 7, nota2 = 8, nota3 = 8;
    double media = (nota1 + nota2 + nota3) / 3;
    double nota4 = -7, nota5 = 8, nota6 = 8;
    double media2 = (nota4 + nota5 + nota6) / 3;

    printf("A media e: %.2lf\n\n", media);

    //ano bissexto
    int ano = 2023;
    printf("O ano %d e bissexto? %d\n\n", ano, ano % 4 == 0 && (!(ano % 100 == 0) || ano % 400 == 0));

    //aprovado?
    bool resultado;
    printf("Aprovado? %d\n", resultado = (media >= 6.0 && (nota1 >= 3 && nota2 >= 3 && nota3 >= 3)));
    printf("Aprovado? %d\n", resultado = (media2 >= 6.0 && (nota4 >= 3 && nota5 >= 3 && nota6 >= 3)));

    
    return 0;
}