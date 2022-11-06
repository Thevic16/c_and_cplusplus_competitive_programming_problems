#include <iostream>
#include <numeric>
#include <math.h>  // modf

using namespace std;
/*
void integerToArray (int x, int resultArray[])
{
    int i=0;
    int y=x;
    bool loop = true;

    while (loop)
    {
        resultArray[i] = y%10;
        y /= 10;
        i =i+1;
        if(y == 0)
        {
            loop =false;
        }
    }
}
*/

int main(void) {
    /*
    double numero = 3.45;
    printf("El número es %f\n", numero);
    // En las siguientes almacenamos las partes separadas
    double parteDecimal, parteEntera;
    parteDecimal = 100*modf(numero, &parteEntera); // mandar apuntador de parteEntera
    // modf devuelve la parte decimal, y pone la parte entera en la variable cuya dirección mandamos
    printf("Parte entera: %f. Parte decimal: %f\n", parteEntera, parteDecimal);
     */

    int n = (5<<1);

    cout << n << endl;

    return 0;
}
