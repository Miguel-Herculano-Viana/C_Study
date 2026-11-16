#include <stdio.h>
#include <string.h>

int main(void){
    int idade = 21;
    char inicial = 'M';
    char linguagem = 'c';
    char nome[] = "Miguel";
    char curso[] = "ADS";
    
    printf("+--------------------------------------------------------+\n");
    printf("| Nome: %-48s |\n", nome);
    printf("| Curso: %-47s |\n", curso);
    printf("| Idade: %-47d |\n", idade);
    printf("| Inicial: %-45c |\n", inicial);
    printf("| Linguagem Favorita: %-34c |\n", linguagem);
    printf("+--------------------------------------------------------+\n");

    return 0;
}