#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char caracter;



    printf("Ingrese el caracter: ");
    scanf("%c", &caracter);
    printf("Ingrese num1: ");
    scanf("%f", &num1);
    printf("Ingrese num2: ");
    scanf("%f", &num2);



    switch (caracter) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case 'x':
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            resultado = num1 / num2;
            break;
        case '%':
            resultado = (int)num1 % (int)num2;
            break;



    }



    printf("El resultado es %f\n", resultado);



    return 0;



}