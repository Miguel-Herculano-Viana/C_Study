# Informações relevantes e aprendizados na calculadora

Nesse módulo tive a introdução a linguagem C, aprendi os conceitos basicos de linguagens de baixo e alto nivel, como cada uma roda no computador e também uma explicação breve sobre o funcionamento da memoria do computador.

Essa primeira parte do curso cobriu o básico, apresentando variáveis, operadores lógicos, sintaxe, especificadores, modificadores e etc. isso tudo foi o suficiente para criar uma calculadora básica e através da curiosidadeacabei descobrindo o fmod() da biblioteca math.h, que usei para contornar o problema de X%Y, onde ele retorna o resto da divisão, o problema é que ele só funciona com numeros inteiros (int).

Aprendi tambem a ler o terminal de erros durante a compilação, como achar a falha e a corrigir.

***COMO COMPILAR A CALCULADORA***

Para compilar e rodar a calculadora, deve-se, primeiramente, identificar o sistema operacional usado

No caso de windows:

`gcc -Wall -Wextra -std=c17 calc.c -o Builds/calc`

No linux:

`gcc -Wall -Wextra -std=c17 calc.c -o Builds/calc -lm`

o uso de `-lm` é obrigatório no Linux para que ele compile o código com a biblioteca `<math.h>` inclusa