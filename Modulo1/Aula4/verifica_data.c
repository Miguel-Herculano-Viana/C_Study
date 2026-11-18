#include <stdio.h>

int main(void){
    const int JANEIRO = 31, MARCO = 31, MAIO = 31, JULHO = 31, AGOSTO = 31, OUTUBRO = 31, DEZEMBRO = 31; //meses com 31 dias
    const int ABRIL = 30, JUNHO = 30, SETEMBRO = 30, NOVEMBRO = 30; //meses com 30 dias
    int fevereiro = 0; //...fevereiro
    int bissexto = 0; //variavel que guarda se um ano é bissexto ou não
    int ano = 0, mes = 0, dia = 0;//variaveis que guardam a data inserida
    
    //verifica se o ano é bissexto ou não
    bissexto = ano % 4 == 0 && (!(ano % 100 == 0) || ano % 400 == 0);
    //atribui a quantidade de dias a fevereiro relativo ao ano bissexto ou normal
    if(bissexto != 0){
        fevereiro = 29;
    }else{
        fevereiro = 28;
    }

    if(mes <= 0){
        printf("Mes invalido, o valor inserido e menor que 1 (um)");

    }else if(mes == 1){
        if(dia >= 1 && dia <= JANEIRO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }

    }else if(mes == 2){
        if(dia >= 1 && dia <= fevereiro){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 3){
        if(dia >= 1 && dia <= MARCO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 4){
        if(dia >= 1 && dia <= ABRIL){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 5){
        if(dia >= 1 && dia <= MAIO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 6){
        if(dia >= 1 && dia <= JUNHO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 7){
        if(dia >= 1 && dia <= JULHO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 8){
        if(dia >= 1 && dia <= AGOSTO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 9){
        if(dia >= 1 && dia <= SETEMBRO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 10){
        if(dia >= 1 && dia <= OUTUBRO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 11){
        if(dia >= 1 && dia <= NOVEMBRO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else if(mes == 12){
        if(dia >= 1 && dia <= DEZEMBRO){
            printf("Data valida (%d/%d/%d)", dia, mes, ano);
        }else{
            printf("Data invalida, dia fora dos dias do mes");
        }
    }else{

    }


    return 0;
}