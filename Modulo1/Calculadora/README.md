# Informações relevantes e aprendizados na calculadora

***COMO COMPILAR A CALCULADORA***

Para compilar e rodar a calculadora, deve-se, primeiramente, identificar o sistema operacional usado

No caso de windows:

- Compilar:
`gcc -Wall -Wextra -std=c17 calc.c -o build/calc`

- Executar:
`calc.exe`
No linux:

- Compilar:
`gcc -Wall -Wextra -std=c17 calc.c -o build/calc -lm`

- Executar:
`./calc`

O uso de `-lm` é obrigatório no Linux para que ele inclua a `<math.h>` no código antes da compilação, funciona como um cabeçalho

Para ambos os casos é necessário estar na pasta do arquivo (`./Modulo1/Calculadora/`)