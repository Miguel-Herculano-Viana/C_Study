#include <stdio.h>

int main(void){
    unsigned char uchar = 255;
    unsigned int uinteger = 3;

    printf("%-10s|%10s\n", "tipo", "bytes");
    printf("%-10s|%10zu\n", "char", sizeof(char));
    printf("%-10s|%10zu\n", "short", sizeof(short));
    printf("%-10s|%10zu\n", "int", sizeof(int));
    printf("%-10s|%10zu\n", "long", sizeof(long));
    printf("%-10s|%10zu\n", "long long", sizeof(long long));
    printf("%-10s|%10zu\n", "float", sizeof(float));
    printf("%-10s|%10zu\n", "double", sizeof(double));

    printf("\n%d\n", uchar);
    uchar = uchar + 1;
    printf("%d\n", uchar);

    printf("%u\n", uinteger);
    uinteger = uinteger - 5;
    printf("%u\n", uinteger);
    return 0;
}