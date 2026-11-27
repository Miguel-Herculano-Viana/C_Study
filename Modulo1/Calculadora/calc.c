#include <stdio.h>
#include <math.h>
//0 ok
//1 entrada inválida
//2 erro matematico

int main(){
    //variaveis
    double num1 = 0, num2 = 0, res = 0;
    char operator = ' ';

    //leitura de input
    printf("Insira a operacao desejada:\n");
    if(scanf(" %lf %c %lf", &num1, &operator, &num2) != 3){
        printf("Entrada invalida\n");
        return 1;
    }
    if(operator == '+'){
        res = num1 + num2;
    }else if(operator == '-'){
        res = num1 - num2;
    }else if(operator == '*' || operator == 'x'){
        res = num1 * num2;
    }else if(operator == '/'){
        if(num2 == 0){
            printf("Erro: Impossivel dividir por 0\n");
            return 2;
        }else{
            res = num1 / num2;
        }
    }else if(operator == '%'){
        if(num2 == 0){
            printf("Erro: Impossivel dividir por 0\n");
            return 2;
        }else{
            res = fmod(num1, num2);
        }
    }else{
        printf("Entrada invalida: Operador Desconhecido\n");
        return 1;
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, res);
    return 0;
}