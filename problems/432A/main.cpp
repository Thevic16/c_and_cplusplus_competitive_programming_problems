#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// https://codeforces.com/problemset/problem/432/A

int main () {
    int n, k, sumador, restador;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[n + 3];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);

    }

    // Cantidad de participantes que cumple con los requisitos para participar
    int part_activos = 0;

    for (int i = 0; i < n; i++) {
        sumador = a[i] + k;
        if (sumador <= 5) {
            part_activos += 1;
        }
    }


    int resultado = part_activos / 3;
    printf("%d\n", resultado);
}
