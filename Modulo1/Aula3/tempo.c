#include <stdio.h>

int main(void){
    int segundos, minutos, horas, dias, restSeg;
    segundos = 98765;

    dias = segundos / 86400;
    restSeg = segundos % 86400;

    horas = restSeg / 3600;
    restSeg %= 3600;

    minutos = restSeg / 60;
    restSeg %= 60;

    printf("%02dd %02d:%02d:%02d", dias, horas, minutos, restSeg);
    return 0;
}