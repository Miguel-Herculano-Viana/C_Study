#include <stdio.h>
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
        printf("Entrada invalida");
        return 1;
    }

    if(operator == '+'){
        res = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf", num1, num2, res);
    }else if(operador == "-"){
        res = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf", num1, num2, res);
    }else if(operador == "*"){
        res = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf", num1, num2, res);
    }else if(operator == "/"){
        res = num1 / num2;
        printf("%.2lf / %.2lf = %.2lf", num1, num2, res);
    }else if(operator == "%"){
        if(num1 < 1e9 && num1 > -1e9)
    }
    return 0;
}