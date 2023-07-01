#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int d;
        scanf("%d", &d);
        char s[n];
        for (int i = 0; i < n; i++) {
            scanf("%c", &s[i]);
        }

        printf("Hola Mundo");
    }
//    long n=0,d=0;
//    long t=0,cont=0;
//    char numero;
//    do{
//        scanf("%l",&t);
//    }while (1>t>pow(10,4));
//    do{
//        do{
//            scanf("%l",&n);
//        }while(1>n>2*pow(10,5));
//
//
//
//        char* cadenanum[n+1];
//
//
//
//        do{
//            scanf("%l",&d);
//        }while (0>d>9);
//
//
//
//        for(int cont=0;cont<n+1;cont++)
//        {
//            cadenanum[cont]=0;
//        }
//        for(int cont=0;cont<n+1;cont++)
//        {
//            scanf("%c",&numero);
//            cadenanum[cont]=numero;
//            printf("\nla cadena anterior es: %c",cadenanum[cont]);
//        }
//        for(int ind=0;ind<n;ind++)
//        {
//            int temp=cadenanum[ind];
//            if(cadenanum[ind]>d)
//            {
//                cadenanum[ind]=temp;
//            }
//            else if(cadenanum[ind]<=d)
//            {
//                cadenanum[ind]=d;
//                cadenanum[ind+1]=temp;
//            }
//            printf("\nla cadena nueva es: %c",cadenanum[ind]);
//
//
//
//        }
//        cont++;
//    }while(cont<t);
}